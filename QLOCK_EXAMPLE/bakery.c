//bakery analogy example
//customer//
acquire(&bread_lock);
while(bread_ready == 0){
  sleep(&bread_ready, &bread_lock);
}
release(&bread_lock);
//baker
acquire(&bread_lock);
bread_ready=1;
wakeup(&bread_ready);
release(&bread_lock);

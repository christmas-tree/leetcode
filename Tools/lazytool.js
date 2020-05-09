// browser bookmark to easily generate a file name without any spaces

javascript:(function(){
    let s = prompt("Enter name: ").replace(/ /g,'');
    let h = prompt("Difficulty: ").toUpperCase();
    prompt("Result: ", h + '_'+ s);
})();


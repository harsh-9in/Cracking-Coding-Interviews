//  When we return a function
//  That function remembers its own 
//  lexical scope

function x(){
    var a=10;
    function y(){
        console.log(a)
    }
    a=500;
    return y;
}

var harsh=x();
harsh();
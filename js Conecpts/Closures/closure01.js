//  When we return a function
//  That function remembers its own 
//  lexical scope

var a=1000;
function x(){
    let a=10;
    function y(){
        console.log(a)
    }
    return y;
}

var harsh=x();
harsh();

// The values in the function is retained 
//  These will not be garbage collected.
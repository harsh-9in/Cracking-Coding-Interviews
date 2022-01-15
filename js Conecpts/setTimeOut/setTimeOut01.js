function x(){
    var i=1;
    setTimeout( function(){
        console.log(i)
    },3000);
    // This function forms a closure.
    console.log("hello");
}

x();


// In this case hello will print first 
// after then the value of i

// This is because setTimeOut 
// is executed after the time. till js runs entire 
//  js code.
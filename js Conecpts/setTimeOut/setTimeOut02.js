function x(){
    for(var i=1;i<=5;i++){
        setTimeout( function(){
            console.log(i)
        },i*1000);
    }
    console.log("hello");
}

x();

// This will output 6 five times.
// because when setTime runs 
//  the for loop had been ran and
// the value of i began 6.
function x(){
    for(let i=1;i<=5;i++){
        setTimeout( function(){
            console.log(i)
        },i*1000);
    }
    console.log("hello");
}

x();

// This will output 1 - 5 
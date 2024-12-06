function block(n)
{
    if(n<=0)
    {
        return;
    }
    block(n-1);
    let str=""
    for(let i=0;i<n;i++)
    {
        str=str+"# ";
    }
    console.log(str);
}
console.log("hello");
block(5);
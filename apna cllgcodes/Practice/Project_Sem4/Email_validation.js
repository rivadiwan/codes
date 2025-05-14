function ValidateEmail(entity)
{
    alert(entity);
var inputText = document.getElementById('text1').value;
var mailformat = /^\w+([\.-]?\w+)*@\w+([\.-]?\w+)+$/;
if(entity=="Admin"){
if(inputText.match(mailformat))
{
    //do nothing it will redirect
}
else
{
alert("You have entered an invalid email address!");
return false;
}
}
else if (entity=="Student"){
    alert("in student");
    var flag=true;
    var s = inputText;
    var ind = s.indexOf("@");
    if(ind==-1)
    flag=false;
    else{
    var s1 = s.substring(ind);
    if(s1!="@mmmut.com")
    flag=false;
    else { 
    var s2 = s.substring(0,ind);
    for(var i=0;i<s2.length();i++)
    {
        if(s2[i]=='1'||s2[i]=='2'||s2[i]=='3'||s2[i]=='4'||s2[i]=='5'||s2[i]=='6'||s2[i]=='7'||s2[i]=='8'||s2[i]=='9'||s2[i]=='0')
        {
            continue;
        }
        flag=false;
        break;
    }
}
}

if (flag==false)
    {
        //do nothing
        alert("You have entered invalid address!");
        return false;
    
    }
}
else if(entity=="Faculty"){
    alert("in faculty!");
    var f=true;
    var s = inputText;
    var ind = s.indexOf("@");
    if(ind==-1)
    f=false;
    else{
        var a=s.substring(ind);
        if(a!='@mmmut.com')
        f=false;
        else{
            var a1=s.substring(0,ind);
            var b=a1.startsWith("hod");
            if(b!=true)
            f=false;
        }
    }
    if (f==false)
    {
        //do nothing
        alert("You have entered invalid address!");
        return false;
    
    }
}
}
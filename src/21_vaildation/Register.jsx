import React, { useEffect, useState } from 'react'
import './register.css'
let initial_errors={
  email:{
    is_Required:false

  },
  password:{
    is_Required:false,
    length_error:false
  },
    re_password:{
    is_Required:false,
    match_error:false
  },
}
const Register = () => {
    const [matched,setMatched]=useState(false)
    const [not_matched,setNot_matched]=useState(false)
    const [error,setError]=useState(initial_errors)
    const [data,setData]=useState(
    {
        email:"",      
        password:"",
        re_password:""                        
})
function register(e){
    e.preventDefault();
    let has_error=false
    let errors=initial_errors
    if(data.email===""){
        has_error=true
        errors.email.is_Required=true
    }
    if (data.password===""){
        has_error=true
        // setError({...error,password:{...error.password,is_Required:true}})
        errors.password.is_Required=true
      }
    if (data.re_password===""){
        has_error==true
        errors.re_password.is_Required=true
        // setError({...error,re_password:{...error.re_password,is_Required:true}})
    
      }
    if((data.password).length>8){
      errors.password.length_error=true
        // setError({...error,password:{...error.password,length_error:true}})
        
    }
    // setError({...error,email:{is_Required:errors.email.is_Required},
    // password:{is_Required:errors.password.is_Required,length_error:errors.password.length_error},
    // re_password:{is_Required:errors.re_password.is_Required,match_error:errors.re_password.match_error}
    // })
    setError({...errors})
    // setTimeout(()=>setError({...initial_errors}),2000)

}
useEffect(()=>{
 
  if(data.password && data.re_password && (data.password).length<=(data.re_password).length ){
        if(data.password===data.re_password){
            setMatched(true)
            setNot_matched(false)
           
        }
        else{
          setMatched(false)
          setNot_matched(true)
        }
    }
},[data.re_password,data.password])
  return (
    <form className='register-container' autoComplete='off'>
      <div className='form-group'>
        <label htmlFor="">Email Address:
        </label>
        <input type="text" name='email' onChange={(e)=>setData({...data,email:(e.target.value).trim()})} />
          {error.email.is_Required && <p className='error'>Email is Required</p>}
      </div>
      <div className='form-group'>
       <label htmlFor="">Password:</label>
       <input type="text" name='password' onChange={(e)=>setData({...data,password:(e.target.value).trim()})} />
      {error.password.is_Required && <p className='error'>Password is Required</p> }
      {error.password.length_error && <p className='error'>Password is Must be 8 charaters</p> }      
      </div>
      <div className='form-group'>
        <label htmlFor="">Re-Enter Password:</label>
        <input type="text" name='re-password' onChange={(e)=>setData({...data,re_password:(e.target.value).trim()})} />
        {error.re_password.is_Required && <p className='error'>re-Password is Required</p> } 
        {not_matched && <p className='error'>Password  are Not Match </p> }
        {matched && <p className='success'>Password are Match</p>}
      </div>
      <button onClick={register}>Register</button>
    </form>
  )
}

export default Register

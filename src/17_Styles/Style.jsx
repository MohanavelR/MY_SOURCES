import React from 'react'
import './Style.css'
// import styles from './Style.module.css'
const Style = () => {
  let blue={
    color:'blue'
  }
  return (
    <div>
         <h1>Method-1:inline css</h1>
         <p style={{color:"red"}}>Inline css</p>
         <p>attributes style set object like color:"red" </p>   
         <h1>Method-2: variable </h1>
         <p style={blue}>Variable like Internal css</p>
         <h1>Method-3 : Import process</h1>
         <p className='color'>External css</p>
         <h1>Method-4:Import process and store varaible</h1>
          {/* <p className={styles.orange-color}>External and variable </p> */}
    </div>
  )
}

export default Style

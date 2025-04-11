import React from 'react'
import Props_Types from 'prop-types'
export const Oneof_Props = (props) => {
  return (
    <div>
        <p>You set Color List Props Type Only use List Colors You Other Color Show Warning Not Error </p>
        <p>OneOf     : <b style={{color:'white',padding:"5px",backgroundColor:props.color }}>Color</b></p>
        <p>You set DataTypes  List Props Type Only use List Dataypes You Other DataTypes Show Warning Not Error </p>
        <p>OneOfType : <b>{props.value}</b> </p>
    </div>
  )
}
Oneof_Props.Props_Types={
  color:Props_Types.oneOf(['blue','green','red']).isRequired,
  value:Props_Types.oneOfType([Props_Types.number,Props_Types.string,Props_Types.bool]).isRequired

}

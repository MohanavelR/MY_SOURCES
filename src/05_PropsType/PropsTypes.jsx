import React from 'react'
import { Table } from './Table'

export const PropsTypes = () => {
  return (
     <>
        <div className='table-container-props-type'>
        <Table name='Mohan' age={21} ismarried={false} />
        <Table name='Jegan' age={21} ismarried={false} />
        <Table name='Selvakumar' age={21} ismarried={false} />
        <Table name='Karthick' age={21} ismarried={false} />
        <Table name='Bala' age={24} ismarried={false} />
        
        </div>
        <p>You set Props Type in Child components file </p>
        <p>import props-Type(any name)  from 'props-type' </p>
          <h2>
        <pre>
          child-components-name.props-Type=object(
          Variable-name:props-Type.datatype(int,string).isRequired)
        </pre>
          </h2>
          <hr />
        </>
  )
}

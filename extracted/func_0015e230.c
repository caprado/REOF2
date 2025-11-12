void func_0015e230() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x20;                                            // 0x0015e230: addiu $sp, $sp, -0x20
    func_00179938();  // 0x1798f0                                // 0x0015e238: jal 0x1798f0
    a0 = -1;                                                    // 0x0015e240: addiu $a0, $zero, -1
    v1 = local_0;                                               // 0x0015e244: lw $v1, 0($sp)
    v0 = v0 ^ 0;                                                // 0x0015e248: xori $v0, $v0, 0
    if (v0 != 0) a0 = v1;                                       // 0x0015e250: movn $a0, $v1, $v0
    return;                                                     // 0x0015e258: jr $ra
    sp = sp + 0x20;                                             // 0x0015e25c: addiu $sp, $sp, 0x20
}
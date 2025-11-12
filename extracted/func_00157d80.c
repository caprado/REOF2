void func_00157d80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00157d80: addiu $sp, $sp, -0x20
    s0 = 0x21 << 16;                                            // 0x00157d94: lui $s0, 0x21
    a2 = s1 << 1;                                               // 0x00157d98: sll $a2, $s1, 1
    s0 = s0 + 0x3e70;                                           // 0x00157d9c: addiu $s0, $s0, 0x3e70
    a2 = a2 + s1;                                               // 0x00157da0: addu $a2, $a2, $s1
    a2 = a2 << 4;                                               // 0x00157da8: sll $a2, $a2, 4
    g_00213e70 = v0;  // Global at 0x00213e70                   // 0x00157dac: sw $v0, 0($s0)
    a2 = a2 + 4;                                                // 0x00157db4: addiu $a2, $a2, 4
    func_00156058();  // 0x155f90                                // 0x00157db8: jal 0x155f90
    func_00157ea8();  // 0x157e90                                // 0x00157dc0: jal 0x157e90
    a0 = g_00213e70;  // Global at 0x00213e70                   // 0x00157dc4: lw $a0, 0($s0)
    v0 = g_00213e70;  // Global at 0x00213e70                   // 0x00157dc8: lw $v0, 0($s0)
    *(uint32_t*)((v0) + 0xc) = s1;                              // 0x00157dcc: sw $s1, 0xc($v0)
    if (s1 <= 0) goto label_0x157dfc;                           // 0x00157dd0: blez $s1, 0x157dfc
    v0 = v0 + 0x10;                                             // 0x00157dd4: addiu $v0, $v0, 0x10
    v1 = 1;                                                     // 0x00157ddc: addiu $v1, $zero, 1
label_0x157de0:
    a0 = a0 + -1;                                               // 0x00157de0: addiu $a0, $a0, -1
    *(uint32_t*)(v0) = v1;                                      // 0x00157de4: sw $v1, 0($v0)
    /* nop */                                                   // 0x00157de8: nop 
    /* nop */                                                   // 0x00157dec: nop 
    /* nop */                                                   // 0x00157df0: nop 
    if (a0 != 0) goto label_0x157de0;                           // 0x00157df4: bnez $a0, 0x157de0
    v0 = v0 + 0xc0;                                             // 0x00157df8: addiu $v0, $v0, 0xc0
label_0x157dfc:
    return;                                                     // 0x00157e0c: jr $ra
    sp = sp + 0x20;                                             // 0x00157e10: addiu $sp, $sp, 0x20
}
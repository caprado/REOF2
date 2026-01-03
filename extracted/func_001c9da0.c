void func_001c9da0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001c9da0: addiu $sp, $sp, -0x10
    a1 = *(int32_t*)((a0) + 4);                                 // 0x001c9da8: lw $a1, 4($a0)
    a0 = *(int32_t*)(a0);                                       // 0x001c9dac: lw $a0, 0($a0)
    v0 = a0 & a1;                                               // 0x001c9db0: and $v0, $a0, $a1
    v0 = ~v0;                                                   // 0x001c9db4: not $v0, $v0
    func_001c7830();  // 1c7830                                // 0x001c9db8: jal 0x1c7830
    a2 = a0 | v0;                                               // 0x001c9dbc: or $a2, $a0, $v0
    v0 = (v0 < 0) ? 1 : 0;                                      // 0x001c9dcc: slt $v0, $v0, $zero
    v0 = -v0;                                                   // 0x001c9dd0: negu $v0, $v0
    return;                                                     // 0x001c9dd4: jr $ra
    sp = sp + 0x10;                                             // 0x001c9dd8: addiu $sp, $sp, 0x10
}
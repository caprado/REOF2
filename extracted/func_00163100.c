void func_00163100() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00163100: addiu $sp, $sp, -0x10
    func_001630e0();  // 1630e0                                // 0x0016310c: jal 0x1630e0
    if (v0 == 0) goto label_0x163130;                           // 0x00163114: beqz $v0, 0x163130
    a0 = 1;                                                     // 0x00163118: addiu $a0, $zero, 1
    v1 = *(int32_t*)(s0);                                       // 0x0016311c: lw $v1, 0($s0)
    if (v1 != a0) goto label_0x163130;                          // 0x00163120: bne $v1, $a0, 0x163130
    v0 = *(int32_t*)((s0) + 0x14);                              // 0x00163128: lw $v0, 0x14($s0)
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x0016312c: sltu $v0, $zero, $v0
label_0x163130:
    return;                                                     // 0x00163138: jr $ra
    sp = sp + 0x10;                                             // 0x0016313c: addiu $sp, $sp, 0x10
}
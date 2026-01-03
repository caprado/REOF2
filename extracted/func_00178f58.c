void func_00178f58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00178f58: addiu $sp, $sp, -0x10
    func_00178fa0();  // 178fa0                                // 0x00178f64: jal 0x178fa0
    if (v0 == 0) goto label_0x178f8c;                           // 0x00178f6c: beqz $v0, 0x178f8c
    a0 = 0x6b;                                                  // 0x00178f70: addiu $a0, $zero, 0x6b
    v0 = *(int32_t*)((s0) + 0xc);                               // 0x00178f74: lw $v0, 0xc($s0)
    if (v0 == a0) goto label_0x178f88;                          // 0x00178f78: beq $v0, $a0, 0x178f88
    v1 = (v0 < 0x6e) ? 1 : 0;                                   // 0x00178f7c: slti $v1, $v0, 0x6e
    if (v1 != 0) goto label_0x178f8c;                           // 0x00178f80: bnez $v1, 0x178f8c
label_0x178f88:
    v0 = 1;                                                     // 0x00178f88: addiu $v0, $zero, 1
label_0x178f8c:
    return;                                                     // 0x00178f94: jr $ra
    sp = sp + 0x10;                                             // 0x00178f98: addiu $sp, $sp, 0x10
}
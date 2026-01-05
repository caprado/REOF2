void func_001af900() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001af900: addiu $sp, $sp, -0x20
    func_001afb40();  // 1afb40                                // 0x001af90c: jal 0x1afb40
    v1 = 3;                                                     // 0x001af914: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x1af964;                          // 0x001af918: beq $v0, $v1, 0x1af964
    v1 = 2;                                                     // 0x001af91c: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1af964;                          // 0x001af920: beq $v0, $v1, 0x1af964
    /* nop */                                                   // 0x001af924: nop 
    v1 = 1;                                                     // 0x001af928: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1af958;                          // 0x001af92c: beq $v0, $v1, 0x1af958
    if (v0 == 0) goto label_0x1af944;                           // 0x001af934: beqz $v0, 0x1af944
    goto label_0x1af968;                                        // 0x001af93c: b 0x1af968
label_0x1af944:
    func_007d3b40();  // 0x7d3b40                               // 0x001af948: jal 0x7d3b40
    goto label_0x1af964;                                        // 0x001af950: b 0x1af964
    /* nop */                                                   // 0x001af954: nop 
label_0x1af958:
    func_007d3430();  // 0x7d3430                               // 0x001af95c: jal 0x7d3430
label_0x1af964:
label_0x1af968:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001af968: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001af96c: jr $ra
    sp = sp + 0x20;                                             // 0x001af970: addiu $sp, $sp, 0x20
}
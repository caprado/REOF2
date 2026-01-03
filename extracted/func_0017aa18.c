void func_0017aa18() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0017aa18: addiu $sp, $sp, -0x10
    v0 = 1;                                                     // 0x0017aa1c: addiu $v0, $zero, 1
    v1 = *(int32_t*)((a1) + 0x74);                              // 0x0017aa2c: lw $v1, 0x74($a1)
    if (v1 != v0) goto label_0x17aa50;                          // 0x0017aa30: bne $v1, $v0, 0x17aa50
    if (a2 == 0) goto label_0x17aa48;                           // 0x0017aa38: beqz $a2, 0x17aa48
    return func_00148f30();  // Tail call                       // 0x0017aa40: j 0x148f30
    sp = sp + 0x10;                                             // 0x0017aa44: addiu $sp, $sp, 0x10
label_0x17aa48:
    return func_00148f28();  // Tail call                       // 0x0017aa48: j 0x148f28
    sp = sp + 0x10;                                             // 0x0017aa4c: addiu $sp, $sp, 0x10
label_0x17aa50:
    if (a2 == 0) goto label_0x17aa60;                           // 0x0017aa50: beqz $a2, 0x17aa60
    return func_00148f30();  // Tail call                       // 0x0017aa58: j 0x148f30
    sp = sp + 0x10;                                             // 0x0017aa5c: addiu $sp, $sp, 0x10
label_0x17aa60:
    return func_00148f28();  // Tail call                       // 0x0017aa60: j 0x148f28
    sp = sp + 0x10;                                             // 0x0017aa64: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x0017aa68: addiu $sp, $sp, -0x10
    v0 = 0x41;                                                  // 0x0017aa6c: addiu $v0, $zero, 0x41
    v1 = *(int32_t*)((a0) + 4);                                 // 0x0017aa74: lw $v1, 4($a0)
    if (v1 == v0) goto label_0x17ab10;                          // 0x0017aa78: beq $v1, $v0, 0x17ab10
    v0 = (v1 < 0x42) ? 1 : 0;                                   // 0x0017aa7c: slti $v0, $v1, 0x42
    if (v0 == 0) goto label_0x17aac8;                           // 0x0017aa80: beqz $v0, 0x17aac8
    v0 = 0x101;                                                 // 0x0017aa84: addiu $v0, $zero, 0x101
    v0 = 0x21;                                                  // 0x0017aa88: addiu $v0, $zero, 0x21
    if (v1 == v0) goto label_0x17ab14;                          // 0x0017aa8c: beq $v1, $v0, 0x17ab14
    v0 = 1;                                                     // 0x0017aa90: addiu $v0, $zero, 1
    v0 = (v1 < 0x22) ? 1 : 0;                                   // 0x0017aa94: slti $v0, $v1, 0x22
    if (v0 == 0) goto label_0x17aab8;                           // 0x0017aa98: beqz $v0, 0x17aab8
    v0 = 0x31;                                                  // 0x0017aa9c: addiu $v0, $zero, 0x31
    v0 = 0x11;                                                  // 0x0017aaa0: addiu $v0, $zero, 0x11
    if (v1 == v0) goto label_0x17ab10;                          // 0x0017aaa4: beq $v1, $v0, 0x17ab10
    a2 = 0x23 << 16;                                            // 0x0017aaa8: lui $a2, 0x23
    goto label_0x17ab04;                                        // 0x0017aaac: b 0x17ab04
    /* nop */                                                   // 0x0017aab4: nop 
label_0x17aab8:
    if (v1 == v0) goto label_0x17ab10;                          // 0x0017aab8: beq $v1, $v0, 0x17ab10
    a2 = 0x23 << 16;                                            // 0x0017aabc: lui $a2, 0x23
    goto label_0x17ab04;                                        // 0x0017aac0: b 0x17ab04
label_0x17aac8:
    if (v1 == v0) goto label_0x17ab14;                          // 0x0017aac8: beq $v1, $v0, 0x17ab14
    v0 = 1;                                                     // 0x0017aacc: addiu $v0, $zero, 1
    v0 = (v1 < 0x102) ? 1 : 0;                                  // 0x0017aad0: slti $v0, $v1, 0x102
    if (v0 == 0) goto label_0x17aaf0;                           // 0x0017aad4: beqz $v0, 0x17aaf0
    v0 = 0x1001;                                                // 0x0017aad8: addiu $v0, $zero, 0x1001
    v0 = 0xf1;                                                  // 0x0017aadc: addiu $v0, $zero, 0xf1
    if (v1 == v0) goto label_0x17ab10;                          // 0x0017aae0: beq $v1, $v0, 0x17ab10
    a2 = 0x23 << 16;                                            // 0x0017aae4: lui $a2, 0x23
    goto label_0x17ab04;                                        // 0x0017aae8: b 0x17ab04
label_0x17aaf0:
    if (v1 != v0) goto label_0x17ab00;                          // 0x0017aaf0: bne $v1, $v0, 0x17ab00
    a2 = 0x23 << 16;                                            // 0x0017aaf4: lui $a2, 0x23
    goto label_0x17ab14;                                        // 0x0017aaf8: b 0x17ab14
label_0x17ab00:
label_0x17ab04:
    a2 = &str_00229720;  // "E212172: SFX_CnvFrmMbARGB8888 : frmfmt is not support." // 0x0017ab04: addiu $a2, $a2, -0x68e0
    func_0017ce88();  // 17ce88                                // 0x0017ab08: jal 0x17ce88
label_0x17ab10:
label_0x17ab14:
    return;                                                     // 0x0017ab18: jr $ra
    sp = sp + 0x10;                                             // 0x0017ab1c: addiu $sp, $sp, 0x10
}
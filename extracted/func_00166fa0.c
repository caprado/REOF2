void func_00166fa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00166fa0: addiu $sp, $sp, -0x30
    v1 = *(int32_t*)(s0);                                       // 0x00166fc8: lw $v1, 0($s0)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x00166fcc: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x00166fd0: jalr $v0
    a2 = 0x7fff << 16;                                          // 0x00166fd8: lui $a2, 0x7fff
    v0 = *(int32_t*)(s0);                                       // 0x00166fe0: lw $v0, 0($s0)
    v1 = *(int32_t*)((v0) + 0x18);                              // 0x00166fec: lw $v1, 0x18($v0)
    a2 = a2 | 0xffff;                                           // 0x00166ff0: ori $a2, $a2, 0xffff
    /* call function at address in v1 */                        // 0x00166ff4: jalr $v1
    v0 = *(int32_t*)((s3) + 4);                                 // 0x00167000: lw $v0, 4($s3)
    a2 = 0x7fff << 16;                                          // 0x00167004: lui $a2, 0x7fff
    a2 = a2 | 0xffff;                                           // 0x0016700c: ori $a2, $a2, 0xffff
    v0 = (v0 < s4) ? 1 : 0;                                     // 0x00167010: slt $v0, $v0, $s4
    if (v0 == 0) goto label_0x167050;                           // 0x00167014: beqz $v0, 0x167050
    v0 = *(int32_t*)(s0);                                       // 0x0016701c: lw $v0, 0($s0)
    v1 = *(int32_t*)((v0) + 0x18);                              // 0x00167020: lw $v1, 0x18($v0)
    /* call function at address in v1 */                        // 0x00167024: jalr $v1
    /* nop */                                                   // 0x00167028: nop 
    a1 = *(int32_t*)(s0);                                       // 0x0016702c: lw $a1, 0($s0)
    v0 = *(int32_t*)((a1) + 0x1c);                              // 0x00167038: lw $v0, 0x1c($a1)
    /* call function at address in v0 */                        // 0x0016703c: jalr $v0
    goto label_0x16705c;                                        // 0x00167044: b 0x16705c
    v1 = *(int32_t*)(s0);                                       // 0x00167048: lw $v1, 0($s0)
    /* nop */                                                   // 0x0016704c: nop 
label_0x167050:
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x00167050: sw $zero, 4($s1)
    *(uint32_t*)(s1) = 0;                                       // 0x00167054: sw $zero, 0($s1)
    v1 = *(int32_t*)(s0);                                       // 0x00167058: lw $v1, 0($s0)
label_0x16705c:
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x00167064: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x00167068: jalr $v0
    return;                                                     // 0x0016708c: jr $ra
    sp = sp + 0x30;                                             // 0x00167090: addiu $sp, $sp, 0x30
}
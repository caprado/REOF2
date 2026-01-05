void func_001cf580() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_3c;
    
    sp = sp + -0x40;                                            // 0x001cf580: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001cf588: addu.qb $zero, $sp, $s1
label_0x1cf598:
    func_001174d8();  // 1174d8                                // 0x001cf5a0: jal 0x1174d8
    if (v0 < 0) goto label_0x1cf5bc;                            // 0x001cf5a8: bltz $v0, 0x1cf5bc
    /* nop */                                                   // 0x001cf5ac: nop 
    v1 = *(int32_t*)((s1) + 0x24);                              // 0x001cf5b0: lw $v1, 0x24($s1)
    if (v1 != 0) goto label_0x1cf5d0;                           // 0x001cf5b4: bnez $v1, 0x1cf5d0
    /* nop */                                                   // 0x001cf5b8: nop 
label_0x1cf5bc:
    v0 = 1 << 16;                                               // 0x001cf5bc: lui $v0, 1
    local_3c = v0;                                              // 0x001cf5c0: sw $v0, 0x3c($sp)
    v0 = local_3c;                                              // 0x001cf5c4: lw $v0, 0x3c($sp)
    goto label_0x1cf598;                                        // 0x001cf5c8: b 0x1cf598
    local_3c = 0;                                               // 0x001cf5cc: sw $zero, 0x3c($sp)
label_0x1cf5d0:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001cf5d4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cf5d8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cf5dc: jr $ra
    sp = sp + 0x40;                                             // 0x001cf5e0: addiu $sp, $sp, 0x40
}
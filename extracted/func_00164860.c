void func_00164860() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00164860: addiu $sp, $sp, -0x30
    if (a1 != 0) goto label_0x164898;                           // 0x00164874: bnez $a1, 0x164898
    v0 = *(int32_t*)(s0);                                       // 0x0016487c: lw $v0, 0($s0)
    v1 = *(int32_t*)((v0) + 0x1c);                              // 0x00164880: lw $v1, 0x1c($v0)
    /* call function at address in v1 */                        // 0x00164884: jalr $v1
    /* nop */                                                   // 0x00164888: nop 
    goto label_0x1648d8;                                        // 0x0016488c: b 0x1648d8
    /* nop */                                                   // 0x00164894: nop 
label_0x164898:
    func_001404a0();  // 1404a0                                // 0x0016489c: jal 0x1404a0
    v1 = *(int32_t*)(s0);                                       // 0x001648a4: lw $v1, 0($s0)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x001648b0: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x001648b4: jalr $v0
    a1 = 1;                                                     // 0x001648b8: addiu $a1, $zero, 1
    v1 = *(int32_t*)(s0);                                       // 0x001648bc: lw $v1, 0($s0)
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x001648c8: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x001648cc: jalr $v0
label_0x1648d8:
    return;                                                     // 0x001648e0: jr $ra
    sp = sp + 0x30;                                             // 0x001648e4: addiu $sp, $sp, 0x30
}
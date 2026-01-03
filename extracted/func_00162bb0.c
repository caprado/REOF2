void func_00162bb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00162bb0: addiu $sp, $sp, -0x10
    func_00163100();  // 163100                                // 0x00162bbc: jal 0x163100
    v1 = 1;                                                     // 0x00162bc4: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x162bfc;                          // 0x00162bc8: bnel $v0, $v1, 0x162bfc
    func_001630e0();  // 1630e0                                // 0x00162bd0: jal 0x1630e0
    /* nop */                                                   // 0x00162bd4: nop 
    a1 = *(int32_t*)((s0) + 0xc);                               // 0x00162bd8: lw $a1, 0xc($s0)
    if (v0 == 0) goto label_0x162bf8;                           // 0x00162bdc: beqz $v0, 0x162bf8
    a0 = *(int32_t*)((s0) + 0x14);                              // 0x00162be0: lw $a0, 0x14($s0)
    v0 = *(int32_t*)((v0) + 0x14);                              // 0x00162be4: lw $v0, 0x14($v0)
    /* beqzl $v0, 0x162bfc */                                   // 0x00162be8: beqzl $v0, 0x162bfc
    /* call function at address in v0 */                        // 0x00162bf0: jalr $v0
    /* nop */                                                   // 0x00162bf4: nop 
label_0x162bf8:
label_0x162bfc:
    return;                                                     // 0x00162c00: jr $ra
    sp = sp + 0x10;                                             // 0x00162c04: addiu $sp, $sp, 0x10
}
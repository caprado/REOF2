void func_00182bd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00182bd0: addiu $sp, $sp, -0x20
    func_00182b88();  // 182b88                                // 0x00182bdc: jal 0x182b88
    v1 = *(int32_t*)(s0);                                       // 0x00182be4: lw $v1, 0($s0)
    if (v1 != 0) goto label_0x182c24;                           // 0x00182bec: bnez $v1, 0x182c24
    v0 = 0xffff << 16;                                          // 0x00182bf4: lui $v0, 0xffff
    v0 = v0 | 0xffff;                                           // 0x00182bf8: ori $v0, $v0, 0xffff
    if (a0 != v0) goto label_0x182c1c;                          // 0x00182bfc: bne $a0, $v0, 0x182c1c
    v0 = 0x7fff << 16;                                          // 0x00182c00: lui $v0, 0x7fff
    v1 = 0x8101 << 16;                                          // 0x00182c04: lui $v1, 0x8101
    v0 = 0xffff << 16;                                          // 0x00182c08: lui $v0, 0xffff
    v1 = v1 | 0x59;                                             // 0x00182c0c: ori $v1, $v1, 0x59
    v0 = v0 | 0xffff;                                           // 0x00182c10: ori $v0, $v0, 0xffff
    goto label_0x182c24;                                        // 0x00182c14: b 0x182c24
    *(uint32_t*)(s0) = v1;                                      // 0x00182c18: sw $v1, 0($s0)
label_0x182c1c:
    v0 = v0 | 0xffff;                                           // 0x00182c1c: ori $v0, $v0, 0xffff
    v0 = a0 & v0;                                               // 0x00182c20: and $v0, $a0, $v0
label_0x182c24:
    return;                                                     // 0x00182c2c: jr $ra
    sp = sp + 0x20;                                             // 0x00182c30: addiu $sp, $sp, 0x20
}
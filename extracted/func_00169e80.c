void func_00169e80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8, local_c;
    
    sp = sp + -0x40;                                            // 0x00169e80: addiu $sp, $sp, -0x40
    s2 = 0x7fff << 16;                                          // 0x00169e9c: lui $s2, 0x7fff
    s2 = s2 | 0xfffe;                                           // 0x00169ea4: ori $s2, $s2, 0xfffe
    goto label_0x169ed4;                                        // 0x00169eac: b 0x169ed4
    s3 = *(int32_t*)((s0) + 0x28);                              // 0x00169eb0: lw $s3, 0x28($s0)
    /* nop */                                                   // 0x00169eb4: nop 
label_0x169eb8:
    func_00169fb8();  // 169fb8                                // 0x00169eb8: jal 0x169fb8
    /* nop */                                                   // 0x00169ebc: nop 
    /* bnezl $v1, 0x169f34 */                                   // 0x00169ec4: bnezl $v1, 0x169f34
    v0 = local_c;                                               // 0x00169ecc: lw $v0, 0xc($sp)
    s1 = s1 + v0;                                               // 0x00169ed0: addu $s1, $s1, $v0
label_0x169ed4:
    v0 = (s2 < s1) ? 1 : 0;                                     // 0x00169ed4: slt $v0, $s2, $s1
    /* bnezl $v0, 0x169f34 */                                   // 0x00169ed8: bnezl $v0, 0x169f34
    a2 = sp + 4;                                                // 0x00169eec: addiu $a2, $sp, 4
    func_00169f50();  // 169f50                                // 0x00169ef0: jal 0x169f50
    t0 = sp + 8;                                                // 0x00169ef4: addiu $t0, $sp, 8
    if (v1 != 0) goto label_0x169f30;                           // 0x00169f00: bnez $v1, 0x169f30
    a3 = sp + 0xc;                                              // 0x00169f04: addiu $a3, $sp, 0xc
    a1 = local_0;                                               // 0x00169f08: lw $a1, 0($sp)
    a2 = local_4;                                               // 0x00169f0c: lw $a2, 4($sp)
    func_00169fd8();  // 169fd8                                // 0x00169f10: jal 0x169fd8
    t0 = local_8;                                               // 0x00169f14: lw $t0, 8($sp)
    if (v1 != 0) goto label_0x169f30;                           // 0x00169f1c: bnez $v1, 0x169f30
    a1 = local_c;                                               // 0x00169f24: lw $a1, 0xc($sp)
    if (a1 != 0) goto label_0x169eb8;                           // 0x00169f28: bnez $a1, 0x169eb8
    /* nop */                                                   // 0x00169f2c: nop 
label_0x169f30:
    return;                                                     // 0x00169f48: jr $ra
    sp = sp + 0x40;                                             // 0x00169f4c: addiu $sp, $sp, 0x40
}
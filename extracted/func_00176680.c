void func_00176680() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00176680: addiu $sp, $sp, -0x20
    a1 = 0xff00 << 16;                                          // 0x0017669c: lui $a1, 0xff00
    a1 = a1 | 0x221;                                            // 0x001766a4: ori $a1, $a1, 0x221
    v0 = *(int32_t*)(t0);                                       // 0x001766a8: lw $v0, 0($t0)
    a3 = *(int32_t*)((t0) + 4);                                 // 0x001766b0: lw $a3, 4($t0)
    v1 = v0 << 1;                                               // 0x001766b4: sll $v1, $v0, 1
    v0 = v0 << 2;                                               // 0x001766b8: sll $v0, $v0, 2
    v1 = v1 + a3;                                               // 0x001766bc: addu $v1, $v1, $a3
    v1 = v1 << 2;                                               // 0x001766c0: sll $v1, $v1, 2
    at = 0x23 << 16;                                            // 0x001766c4: lui $at, 0x23
    at = at + v0;                                               // 0x001766c8: addu $at, $at, $v0
    v0 = g_00229370;  // Global at 0x00229370                   // 0x001766cc: lw $v0, -0x6c90($at)
    at = 0x23 << 16;                                            // 0x001766d0: lui $at, 0x23
    at = at + v1;                                               // 0x001766d4: addu $at, $at, $v1
    v1 = g_00229398;  // Global at 0x00229398                   // 0x001766d8: lw $v1, -0x6c68($at)
    if (v1 != 0) goto label_0x176700;                           // 0x001766dc: bnez $v1, 0x176700
    func_00169940();  // 0x1698d0                                // 0x001766e4: jal 0x1698d0
    /* nop */                                                   // 0x001766e8: nop 
    v1 = 1;                                                     // 0x001766ec: addiu $v1, $zero, 1
    *(uint32_t*)(s1) = 0;                                       // 0x001766f0: sw $zero, 0($s1)
    goto label_0x17670c;                                        // 0x001766f4: b 0x17670c
    *(uint32_t*)(s0) = v1;                                      // 0x001766f8: sw $v1, 0($s0)
    /* nop */                                                   // 0x001766fc: nop 
label_0x176700:
    /* call function at address in v1 */                        // 0x00176704: jalr $v1
label_0x17670c:
    return;                                                     // 0x00176718: jr $ra
    sp = sp + 0x20;                                             // 0x0017671c: addiu $sp, $sp, 0x20
}
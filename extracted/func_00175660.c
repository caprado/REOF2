void func_00175660() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00175660: addiu $sp, $sp, -0x20
    func_00169af0();  // 169af0                                // 0x0017567c: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00175684: lui $a1, 0xff00
    if (v0 == 0) goto label_0x1756b0;                           // 0x0017568c: beqz $v0, 0x1756b0
    a1 = a1 | 0x11c;                                            // 0x00175690: ori $a1, $a1, 0x11c
    return func_00169940();  // Tail call                        // 0x001756a4: j 0x1698d0
    sp = sp + 0x20;                                             // 0x001756a8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x001756ac: nop 
label_0x1756b0:
    v0 = *(int32_t*)((s0) + 0x78);                              // 0x001756b0: lw $v0, 0x78($s0)
    if (v0 == 0) goto label_0x1756d0;                           // 0x001756b4: beqz $v0, 0x1756d0
    v0 = s0 + 0x10c;                                            // 0x001756b8: addiu $v0, $s0, 0x10c
    v1 = *(int32_t*)((s0) + 0x108);                             // 0x001756bc: lw $v1, 0x108($s0)
    *(uint32_t*)(s1) = v0;                                      // 0x001756c0: sw $v0, 0($s1)
    goto label_0x1756d8;                                        // 0x001756c4: b 0x1756d8
    *(uint32_t*)(s2) = v1;                                      // 0x001756c8: sw $v1, 0($s2)
    /* nop */                                                   // 0x001756cc: nop 
label_0x1756d0:
    *(uint32_t*)(s1) = 0;                                       // 0x001756d0: sw $zero, 0($s1)
    *(uint32_t*)(s2) = 0;                                       // 0x001756d4: sw $zero, 0($s2)
label_0x1756d8:
    return;                                                     // 0x001756ec: jr $ra
    sp = sp + 0x20;                                             // 0x001756f0: addiu $sp, $sp, 0x20
}
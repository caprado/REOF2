void func_00175248() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00175248: addiu $sp, $sp, -0x20
    if (s0 != 0) goto label_0x175288;                           // 0x00175268: bnez $s0, 0x175288
    v0 = s1 << 2;                                               // 0x0017526c: sll $v0, $s1, 2
    at = 0x21 << 16;                                            // 0x00175270: lui $at, 0x21
    at = at + v0;                                               // 0x00175274: addu $at, $at, $v0
    v0 = g_00215588;  // Global at 0x00215588                   // 0x00175278: lw $v0, 0x5588($at)
    goto label_0x1752c8;                                        // 0x0017527c: b 0x1752c8
    *(uint32_t*)(s2) = v0;                                      // 0x00175280: sw $v0, 0($s2)
    /* nop */                                                   // 0x00175284: nop 
label_0x175288:
    func_00169b10();  // 0x169af0                                // 0x00175288: jal 0x169af0
    /* nop */                                                   // 0x0017528c: nop 
    a1 = 0xff00 << 16;                                          // 0x00175290: lui $a1, 0xff00
    if (v0 == 0) goto label_0x1752b8;                           // 0x00175294: beqz $v0, 0x1752b8
    a1 = a1 | 0x113;                                            // 0x001752a0: ori $a1, $a1, 0x113
    return func_00169940();  // Tail call                        // 0x001752b0: j 0x1698d0
    sp = sp + 0x20;                                             // 0x001752b4: addiu $sp, $sp, 0x20
label_0x1752b8:
    func_001752f8();  // 0x1752e8                                // 0x001752bc: jal 0x1752e8
    *(uint32_t*)(s2) = v0;                                      // 0x001752c4: sw $v0, 0($s2)
label_0x1752c8:
    return;                                                     // 0x001752dc: jr $ra
    sp = sp + 0x20;                                             // 0x001752e0: addiu $sp, $sp, 0x20
}
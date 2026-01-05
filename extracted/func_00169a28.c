void func_00169a28() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00169a28: addiu $sp, $sp, -0x20
    if (s0 != 0) goto label_0x169a80;                           // 0x00169a3c: bnez $s0, 0x169a80
    v0 = 0x21 << 16;                                            // 0x00169a44: lui $v0, 0x21
    v0 = v0 + 0x5588;                                           // 0x00169a48: addiu $v0, $v0, 0x5588
    a1 = g_00215734;  // Global at 0x00215734                   // 0x00169a5c: lw $a1, 0x1ac($v0)
    *(uint32_t*)((s1) + 0x10) = a1;                             // 0x00169a70: sw $a1, 0x10($s1)
    goto label_0x169adc;                                        // 0x00169a74: b 0x169adc
    /* nop */                                                   // 0x00169a7c: nop 
label_0x169a80:
    func_00169af0();  // 169af0                                // 0x00169a80: jal 0x169af0
    /* nop */                                                   // 0x00169a84: nop 
    a1 = 0xff00 << 16;                                          // 0x00169a88: lui $a1, 0xff00
    if (v0 == 0) goto label_0x169ab0;                           // 0x00169a8c: beqz $v0, 0x169ab0
    a1 = a1 | 0x102;                                            // 0x00169a98: ori $a1, $a1, 0x102
    return func_00169940();  // Tail call                        // 0x00169aa4: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00169aa8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00169aac: nop 
label_0x169ab0:
    a0 = *(int32_t*)((s0) + 0x99c);                             // 0x00169ac0: lw $a0, 0x99c($s0)
    *(uint32_t*)((s1) + 0x10) = a0;                             // 0x00169ad4: sw $a0, 0x10($s1)
label_0x169adc:
    return;                                                     // 0x00169ae8: jr $ra
    sp = sp + 0x20;                                             // 0x00169aec: addiu $sp, $sp, 0x20
}
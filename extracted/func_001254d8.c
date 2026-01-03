void func_001254d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001254d8: addiu $sp, $sp, -0x20
    v0 = 0x1f << 16;                                            // 0x001254dc: lui $v0, 0x1f
    s0 = v0 + 0x1f58;                                           // 0x001254e8: addiu $s0, $v0, 0x1f58
    s1 = 0xf;                                                   // 0x001254f0: addiu $s1, $zero, 0xf
    s2 = 1;                                                     // 0x001254f8: addiu $s2, $zero, 1
    /* nop */                                                   // 0x001254fc: nop 
label_0x125500:
    v0 = g_001f1f58;  // Global at 0x001f1f58                   // 0x00125500: lh $v0, 0($s0)
    if (v0 != s2) goto label_0x125518;                          // 0x00125504: bnel $v0, $s2, 0x125518
    s1 = s1 + -1;                                               // 0x00125508: addiu $s1, $s1, -1
    func_00125428();  // 125428                                // 0x0012550c: jal 0x125428
    s1 = s1 + -1;                                               // 0x00125514: addiu $s1, $s1, -1
label_0x125518:
    if (s1 >= 0) goto label_0x125500;                           // 0x00125518: bgez $s1, 0x125500
    s0 = s0 + 0xe4;                                             // 0x0012551c: addiu $s0, $s0, 0xe4
    return;                                                     // 0x00125530: jr $ra
    sp = sp + 0x20;                                             // 0x00125534: addiu $sp, $sp, 0x20
}
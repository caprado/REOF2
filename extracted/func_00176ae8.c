void func_00176ae8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00176ae8: addiu $sp, $sp, -0x20
    v0 = -1;                                                    // 0x00176aec: addiu $v0, $zero, -1
    func_00169b10();  // 0x169af0                                // 0x00176b04: jal 0x169af0
    *(uint32_t*)(s1) = v0;                                      // 0x00176b08: sw $v0, 0($s1)
    a1 = 0xff00 << 16;                                          // 0x00176b0c: lui $a1, 0xff00
    if (v0 == 0) goto label_0x176b30;                           // 0x00176b10: beqz $v0, 0x176b30
    a1 = a1 | 0x11b;                                            // 0x00176b1c: ori $a1, $a1, 0x11b
    return func_00169940();  // Tail call                        // 0x00176b28: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00176b2c: addiu $sp, $sp, 0x20
label_0x176b30:
    v1 = *(int32_t*)((s0) + 0x920);                             // 0x00176b30: lw $v1, 0x920($s0)
    if (v1 == 0) goto label_0x176b4c;                           // 0x00176b34: beqz $v1, 0x176b4c
    v1 = v1 << 2;                                               // 0x00176b38: sll $v1, $v1, 2
    a0 = 0x23 << 16;                                            // 0x00176b3c: lui $a0, 0x23
    a0 = a0 + v1;                                               // 0x00176b40: addu $a0, $a0, $v1
    a0 = g_00229370;  // Global at 0x00229370                   // 0x00176b44: lw $a0, -0x6c90($a0)
    *(uint32_t*)(s1) = a0;                                      // 0x00176b48: sw $a0, 0($s1)
label_0x176b4c:
    return;                                                     // 0x00176b58: jr $ra
    sp = sp + 0x20;                                             // 0x00176b5c: addiu $sp, $sp, 0x20
}
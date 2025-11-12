void func_0011f1b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x0011f1b8: addiu $sp, $sp, -0x40
    v0 = (unsigned)s0 >> 8;                                     // 0x0011f1c8: srl $v0, $s0, 8
    func_0011d378();  // 0x11d320                                // 0x0011f1d4: jal 0x11d320
    s1 = v0 << 4;                                               // 0x0011f1d8: sll $s1, $v0, 4
    if (s0 < 0) goto label_0x11f1f8;                            // 0x0011f1dc: bltz $s0, 0x11f1f8
    v0 = *(int32_t*)((s1) + 4);                                 // 0x0011f1e4: lw $v0, 4($s1)
    v0 = s0 ^ v0;                                               // 0x0011f1e8: xor $v0, $s0, $v0
    v0 = v0 & 0xff;                                             // 0x0011f1ec: andi $v0, $v0, 0xff
    if (v0 == 0) goto label_0x11f214;                           // 0x0011f1f0: beqz $v0, 0x11f214
    /* nop */                                                   // 0x0011f1f4: nop 
label_0x11f1f8:
    if (s2 == 0) goto label_0x11f208;                           // 0x0011f1f8: beqz $s2, 0x11f208
    /* nop */                                                   // 0x0011f1fc: nop 
    func_0011d390();  // 0x11d378                                // 0x0011f200: jal 0x11d378
    /* nop */                                                   // 0x0011f204: nop 
label_0x11f208:
    v0 = 0x8000 << 16;                                          // 0x0011f208: lui $v0, 0x8000
    goto label_0x11f248;                                        // 0x0011f20c: b 0x11f248
    v0 = v0 | 0x8002;                                           // 0x0011f210: ori $v0, $v0, 0x8002
label_0x11f214:
    a0 = *(int32_t*)((s1) + 4);                                 // 0x0011f214: lw $a0, 4($s1)
    func_0011e6d8();  // 0x11e688                                // 0x0011f218: jal 0x11e688
    /* nop */                                                   // 0x0011f21c: nop 
    v1 = 0x25 << 16;                                            // 0x0011f220: lui $v1, 0x25
    v0 = g_00253480;  // Global at 0x00253480                   // 0x0011f224: lw $v0, 0x3480($v1)
    g_00253480 = s1;  // Global at 0x00253480                   // 0x0011f228: sw $s1, 0x3480($v1)
    *(uint32_t*)(s1) = v0;                                      // 0x0011f22c: sw $v0, 0($s1)
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x0011f230: sw $zero, 4($s1)
    if (s2 == 0) goto label_0x11f248;                           // 0x0011f234: beqz $s2, 0x11f248
    func_0011d390();  // 0x11d378                                // 0x0011f23c: jal 0x11d378
    /* nop */                                                   // 0x0011f240: nop 
label_0x11f248:
    return;                                                     // 0x0011f258: jr $ra
    sp = sp + 0x40;                                             // 0x0011f25c: addiu $sp, $sp, 0x40
}
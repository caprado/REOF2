void func_0011c210() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x80;                                            // 0x0011c210: addiu $sp, $sp, -0x80
    func_0011bb38();  // 0x11ba38                                // 0x0011c240: jal 0x11ba38
    if (v0 < 0) goto label_0x11c410;                            // 0x0011c248: bltz $v0, 0x11c410
    v0 = 0xffff << 16;                                          // 0x0011c24c: lui $v0, 0xffff
    func_0011bbc8();  // 0x11bb38                                // 0x0011c250: jal 0x11bb38
    /* nop */                                                   // 0x0011c254: nop 
    /* beqzl $v0, 0x11c26c */                                   // 0x0011c258: beqzl $v0, 0x11c26c
    v0 = 0x25 << 16;                                            // 0x0011c25c: lui $v0, 0x25
    v0 = 0xfffe << 16;                                          // 0x0011c260: lui $v0, 0xfffe
    goto label_0x11c410;                                        // 0x0011c264: b 0x11c410
    v0 = v0 | 0xfffc;                                           // 0x0011c268: ori $v0, $v0, 0xfffc
    s1 = v0 + -0x478;                                           // 0x0011c270: addiu $s1, $v0, -0x478
    a2 = 0xfc;                                                  // 0x0011c274: addiu $a2, $zero, 0xfc
    func_0010b460();  // 0x10b2a0                                // 0x0011c278: jal 0x10b2a0
    v0 = s1 + -8;                                               // 0x0011c280: addiu $v0, $s1, -8
    if (s0 == 0) goto label_0x11c3b8;                           // 0x0011c284: beqz $s0, 0x11c3b8
    g_fffdfc83 = 0;  // Global at 0xfffdfc83                    // 0x0011c288: sb $zero, 0x103($v0)
    v0 = (s2 < 0xfd) ? 1 : 0;                                   // 0x0011c28c: slti $v0, $s2, 0xfd
    if (v0 != 0) goto label_0x11c3a0;                           // 0x0011c290: bnez $v0, 0x11c3a0
    a0 = s1 + 0xfc;                                             // 0x0011c298: addiu $a0, $s1, 0xfc
    v0 = s0 | a0;                                               // 0x0011c29c: or $v0, $s0, $a0
    v0 = v0 & 7;                                                // 0x0011c2a0: andi $v0, $v0, 7
    if (v0 == 0) goto label_0x11c314;                           // 0x0011c2a4: beqz $v0, 0x11c314
    v0 = s0 + 0xe0;                                             // 0x0011c2ac: addiu $v0, $s0, 0xe0
    s5 = 0x25 << 16;                                            // 0x0011c2b0: lui $s5, 0x25
    a1 = 0x25 << 16;                                            // 0x0011c2b4: lui $a1, 0x25
label_0x11c2b8:
    v1 = v1 + 0x20;                                             // 0x0011c2f8: addiu $v1, $v1, 0x20
    a0 = a0 + 0x20;                                             // 0x0011c2fc: addiu $a0, $a0, 0x20
    /* nop */                                                   // 0x0011c300: nop 
    if (v1 != v0) goto label_0x11c2b8;                          // 0x0011c304: bne $v1, $v0, 0x11c2b8
    /* nop */                                                   // 0x0011c308: nop 
    goto label_0x11c354;                                        // 0x0011c30c: b 0x11c354
    /* nop */                                                   // 0x0011c310: nop 
label_0x11c314:
    v0 = s0 + 0xe0;                                             // 0x0011c314: addiu $v0, $s0, 0xe0
    s5 = 0x25 << 16;                                            // 0x0011c318: lui $s5, 0x25
    a1 = 0x25 << 16;                                            // 0x0011c31c: lui $a1, 0x25
label_0x11c320:
    v1 = v1 + 0x20;                                             // 0x0011c340: addiu $v1, $v1, 0x20
    a0 = a0 + 0x20;                                             // 0x0011c344: addiu $a0, $a0, 0x20
    /* nop */                                                   // 0x0011c348: nop 
    if (v1 != v0) goto label_0x11c320;                          // 0x0011c34c: bne $v1, $v0, 0x11c320
    /* nop */                                                   // 0x0011c350: nop 
label_0x11c354:
    /* lwl $t1, 0x1b($v1) */                                    // 0x0011c36c: lwl $t1, 0x1b($v1)
    /* lwr $t1, 0x18($v1) */                                    // 0x0011c370: lwr $t1, 0x18($v1)
    /* swl $t1, 0x1b($a0) */                                    // 0x0011c38c: swl $t1, 0x1b($a0)
    v0 = 0xfc;                                                  // 0x0011c390: addiu $v0, $zero, 0xfc
    /* swr $t1, 0x18($a0) */                                    // 0x0011c394: swr $t1, 0x18($a0)
    goto label_0x11c3c8;                                        // 0x0011c398: b 0x11c3c8
    g_0024fb80 = v0;  // Global at 0x0024fb80                   // 0x0011c39c: sw $v0, -0x480($s5)
label_0x11c3a0:
    a0 = s1 + 0xfc;                                             // 0x0011c3a0: addiu $a0, $s1, 0xfc
    func_00107b68();  // 0x107ab8                                // 0x0011c3a8: jal 0x107ab8
    s5 = 0x25 << 16;                                            // 0x0011c3ac: lui $s5, 0x25
    goto label_0x11c3c4;                                        // 0x0011c3b0: b 0x11c3c4
    g_fffdfb80 = s2;  // Global at 0xfffdfb80                   // 0x0011c3b4: sw $s2, -8($s1)
label_0x11c3b8:
    g_0024fd64 = 0;  // Global at 0x0024fd64                    // 0x0011c3b8: sb $zero, 0x104($v0)
    s5 = 0x25 << 16;                                            // 0x0011c3bc: lui $s5, 0x25
    g_fffdfb80 = 0;  // Global at 0xfffdfb80                    // 0x0011c3c0: sw $zero, -8($s1)
label_0x11c3c4:
    a1 = 0x25 << 16;                                            // 0x0011c3c4: lui $a1, 0x25
label_0x11c3c8:
    s0 = s5 + -0x480;                                           // 0x0011c3c8: addiu $s0, $s5, -0x480
    a0 = a1 + -0x280;                                           // 0x0011c3cc: addiu $a0, $a1, -0x280
    local_0 = 0;                                                // 0x0011c3d4: sw $zero, 0($sp)
    t0 = 0x200;                                                 // 0x0011c3e0: addiu $t0, $zero, 0x200
    t2 = 8;                                                     // 0x0011c3e8: addiu $t2, $zero, 8
    func_001178a0();  // 0x1176a8                                // 0x0011c3ec: jal 0x1176a8
    if (v0 >= 0) goto label_0x11c408;                           // 0x0011c3f4: bgezl $v0, 0x11c408
    v1 = g_0024fb84;  // Global at 0x0024fb84                   // 0x0011c3f8: lw $v1, 4($s0)
    v0 = 0xfffe << 16;                                          // 0x0011c3fc: lui $v0, 0xfffe
    goto label_0x11c410;                                        // 0x0011c400: b 0x11c410
    v0 = v0 | 0xffff;                                           // 0x0011c404: ori $v0, $v0, 0xffff
label_0x11c408:
    v0 = g_0024fb80;  // Global at 0x0024fb80                   // 0x0011c408: lw $v0, -0x480($s5)
    *(uint32_t*)(s4) = v1;                                      // 0x0011c40c: sw $v1, 0($s4)
label_0x11c410:
    return;                                                     // 0x0011c42c: jr $ra
    sp = sp + 0x80;                                             // 0x0011c430: addiu $sp, $sp, 0x80
}
void func_0011be08() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x90;                                            // 0x0011be08: addiu $sp, $sp, -0x90
    func_0011bb38();  // 0x11ba38                                // 0x0011be38: jal 0x11ba38
    if (v0 < 0) goto label_0x11bfe8;                            // 0x0011be40: bltz $v0, 0x11bfe8
    v0 = 0xffff << 16;                                          // 0x0011be44: lui $v0, 0xffff
    func_0011bbc8();  // 0x11bb38                                // 0x0011be48: jal 0x11bb38
    /* nop */                                                   // 0x0011be4c: nop 
    if (v0 == 0) goto label_0x11be64;                           // 0x0011be50: beqz $v0, 0x11be64
    s4 = 0x25 << 16;                                            // 0x0011be54: lui $s4, 0x25
    v0 = 0xfffe << 16;                                          // 0x0011be58: lui $v0, 0xfffe
    goto label_0x11bfe8;                                        // 0x0011be5c: b 0x11bfe8
    v0 = v0 | 0xfffc;                                           // 0x0011be60: ori $v0, $v0, 0xfffc
label_0x11be64:
    s2 = s4 + -0x480;                                           // 0x0011be68: addiu $s2, $s4, -0x480
    if (s0 == 0) goto label_0x11bf98;                           // 0x0011be6c: beqz $s0, 0x11bf98
    g_0024fb80 = s3;  // Global at 0x0024fb80                   // 0x0011be70: sw $s3, -0x480($s4)
    v0 = (s1 < 0xfd) ? 1 : 0;                                   // 0x0011be74: slti $v0, $s1, 0xfd
    if (v0 != 0) goto label_0x11bf84;                           // 0x0011be78: bnez $v0, 0x11bf84
    a0 = s2 + 0x104;                                            // 0x0011be80: addiu $a0, $s2, 0x104
    v0 = s0 | a0;                                               // 0x0011be84: or $v0, $s0, $a0
    v0 = v0 & 7;                                                // 0x0011be88: andi $v0, $v0, 7
    if (v0 == 0) goto label_0x11bef8;                           // 0x0011be8c: beqz $v0, 0x11bef8
    v0 = s0 + 0xe0;                                             // 0x0011be94: addiu $v0, $s0, 0xe0
    a1 = 0x25 << 16;                                            // 0x0011be98: lui $a1, 0x25
label_0x11be9c:
    a3 = a3 + 0x20;                                             // 0x0011bedc: addiu $a3, $a3, 0x20
    a0 = a0 + 0x20;                                             // 0x0011bee0: addiu $a0, $a0, 0x20
    /* nop */                                                   // 0x0011bee4: nop 
    if (a3 != v0) goto label_0x11be9c;                          // 0x0011bee8: bne $a3, $v0, 0x11be9c
    /* nop */                                                   // 0x0011beec: nop 
    goto label_0x11bf34;                                        // 0x0011bef0: b 0x11bf34
    /* nop */                                                   // 0x0011bef4: nop 
label_0x11bef8:
    v0 = s0 + 0xe0;                                             // 0x0011bef8: addiu $v0, $s0, 0xe0
    a1 = 0x25 << 16;                                            // 0x0011befc: lui $a1, 0x25
label_0x11bf00:
    a3 = a3 + 0x20;                                             // 0x0011bf20: addiu $a3, $a3, 0x20
    a0 = a0 + 0x20;                                             // 0x0011bf24: addiu $a0, $a0, 0x20
    /* nop */                                                   // 0x0011bf28: nop 
    if (a3 != v0) goto label_0x11bf00;                          // 0x0011bf2c: bne $a3, $v0, 0x11bf00
    /* nop */                                                   // 0x0011bf30: nop 
label_0x11bf34:
    /* lwl $t0, 0x1b($a3) */                                    // 0x0011bf4c: lwl $t0, 0x1b($a3)
    /* lwr $t0, 0x18($a3) */                                    // 0x0011bf50: lwr $t0, 0x18($a3)
    /* swl $t0, 0x1b($a0) */                                    // 0x0011bf6c: swl $t0, 0x1b($a0)
    v1 = s5 + -0x480;                                           // 0x0011bf70: addiu $v1, $s5, -0x480
    v0 = 0xfc;                                                  // 0x0011bf74: addiu $v0, $zero, 0xfc
    /* swr $t0, 0x18($a0) */                                    // 0x0011bf78: swr $t0, 0x18($a0)
    goto label_0x11bfa0;                                        // 0x0011bf7c: b 0x11bfa0
    *(uint32_t*)((v1) + 4) = v0;                                // 0x0011bf80: sw $v0, 4($v1)
label_0x11bf84:
    a0 = s2 + 0x104;                                            // 0x0011bf84: addiu $a0, $s2, 0x104
    func_00107b68();  // 0x107ab8                                // 0x0011bf88: jal 0x107ab8
    goto label_0x11bf9c;                                        // 0x0011bf90: b 0x11bf9c
    g_0024fb84 = s1;  // Global at 0x0024fb84                   // 0x0011bf94: sw $s1, 4($s2)
label_0x11bf98:
    g_0024fb84 = 0;  // Global at 0x0024fb84                    // 0x0011bf98: sw $zero, 4($s2)
label_0x11bf9c:
    a1 = 0x25 << 16;                                            // 0x0011bf9c: lui $a1, 0x25
label_0x11bfa0:
    s0 = s5 + -0x480;                                           // 0x0011bfa0: addiu $s0, $s5, -0x480
    a0 = a1 + -0x280;                                           // 0x0011bfa4: addiu $a0, $a1, -0x280
    local_0 = 0;                                                // 0x0011bfa8: sw $zero, 0($sp)
    a1 = 7;                                                     // 0x0011bfac: addiu $a1, $zero, 7
    t0 = 0x200;                                                 // 0x0011bfb8: addiu $t0, $zero, 0x200
    t2 = 8;                                                     // 0x0011bfc0: addiu $t2, $zero, 8
    func_001178a0();  // 0x1176a8                                // 0x0011bfc4: jal 0x1176a8
    if (v0 >= 0) goto label_0x11bfe0;                           // 0x0011bfcc: bgezl $v0, 0x11bfe0
    v1 = *(int32_t*)((s0) + 4);                                 // 0x0011bfd0: lw $v1, 4($s0)
    v0 = 0xfffe << 16;                                          // 0x0011bfd4: lui $v0, 0xfffe
    goto label_0x11bfe8;                                        // 0x0011bfd8: b 0x11bfe8
    v0 = v0 | 0xffff;                                           // 0x0011bfdc: ori $v0, $v0, 0xffff
label_0x11bfe0:
    v0 = g_0024fb80;  // Global at 0x0024fb80                   // 0x0011bfe0: lw $v0, -0x480($s4)
    *(uint32_t*)(s6) = v1;                                      // 0x0011bfe4: sw $v1, 0($s6)
label_0x11bfe8:
    return;                                                     // 0x0011c008: jr $ra
    sp = sp + 0x90;                                             // 0x0011c00c: addiu $sp, $sp, 0x90
}
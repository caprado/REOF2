void func_0011bc00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x90;                                            // 0x0011bc00: addiu $sp, $sp, -0x90
    func_0011ba38();  // 11ba38                                // 0x0011bc30: jal 0x11ba38
    if (v0 < 0) goto label_0x11bde0;                            // 0x0011bc38: bltz $v0, 0x11bde0
    v0 = 0xffff << 16;                                          // 0x0011bc3c: lui $v0, 0xffff
    func_0011bb38();  // 11bb38                                // 0x0011bc40: jal 0x11bb38
    /* nop */                                                   // 0x0011bc44: nop 
    if (v0 == 0) goto label_0x11bc5c;                           // 0x0011bc48: beqz $v0, 0x11bc5c
    s4 = 0x25 << 16;                                            // 0x0011bc4c: lui $s4, 0x25
    v0 = 0xfffe << 16;                                          // 0x0011bc50: lui $v0, 0xfffe
    goto label_0x11bde0;                                        // 0x0011bc54: b 0x11bde0
    v0 = v0 | 0xfffc;                                           // 0x0011bc58: ori $v0, $v0, 0xfffc
label_0x11bc5c:
    s2 = s4 + -0x480;                                           // 0x0011bc60: addiu $s2, $s4, -0x480
    if (s0 == 0) goto label_0x11bd90;                           // 0x0011bc64: beqz $s0, 0x11bd90
    g_0024fb80 = s3;  // Global at 0x0024fb80                   // 0x0011bc68: sw $s3, -0x480($s4)
    v0 = (s1 < 0xfd) ? 1 : 0;                                   // 0x0011bc6c: slti $v0, $s1, 0xfd
    if (v0 != 0) goto label_0x11bd7c;                           // 0x0011bc70: bnez $v0, 0x11bd7c
    a0 = s2 + 0x104;                                            // 0x0011bc78: addiu $a0, $s2, 0x104
    v0 = s0 | a0;                                               // 0x0011bc7c: or $v0, $s0, $a0
    v0 = v0 & 7;                                                // 0x0011bc80: andi $v0, $v0, 7
    if (v0 == 0) goto label_0x11bcf0;                           // 0x0011bc84: beqz $v0, 0x11bcf0
    v0 = s0 + 0xe0;                                             // 0x0011bc8c: addiu $v0, $s0, 0xe0
    a1 = 0x25 << 16;                                            // 0x0011bc90: lui $a1, 0x25
label_0x11bc94:
    a3 = a3 + 0x20;                                             // 0x0011bcd4: addiu $a3, $a3, 0x20
    a0 = a0 + 0x20;                                             // 0x0011bcd8: addiu $a0, $a0, 0x20
    /* nop */                                                   // 0x0011bcdc: nop 
    if (a3 != v0) goto label_0x11bc94;                          // 0x0011bce0: bne $a3, $v0, 0x11bc94
    /* nop */                                                   // 0x0011bce4: nop 
    goto label_0x11bd2c;                                        // 0x0011bce8: b 0x11bd2c
    /* nop */                                                   // 0x0011bcec: nop 
label_0x11bcf0:
    v0 = s0 + 0xe0;                                             // 0x0011bcf0: addiu $v0, $s0, 0xe0
    a1 = 0x25 << 16;                                            // 0x0011bcf4: lui $a1, 0x25
label_0x11bcf8:
    a3 = a3 + 0x20;                                             // 0x0011bd18: addiu $a3, $a3, 0x20
    a0 = a0 + 0x20;                                             // 0x0011bd1c: addiu $a0, $a0, 0x20
    /* nop */                                                   // 0x0011bd20: nop 
    if (a3 != v0) goto label_0x11bcf8;                          // 0x0011bd24: bne $a3, $v0, 0x11bcf8
    /* nop */                                                   // 0x0011bd28: nop 
label_0x11bd2c:
    /* lwl $t0, 0x1b($a3) */                                    // 0x0011bd44: lwl $t0, 0x1b($a3)
    /* lwr $t0, 0x18($a3) */                                    // 0x0011bd48: lwr $t0, 0x18($a3)
    /* swl $t0, 0x1b($a0) */                                    // 0x0011bd64: swl $t0, 0x1b($a0)
    v1 = s5 + -0x480;                                           // 0x0011bd68: addiu $v1, $s5, -0x480
    v0 = 0xfc;                                                  // 0x0011bd6c: addiu $v0, $zero, 0xfc
    /* swr $t0, 0x18($a0) */                                    // 0x0011bd70: swr $t0, 0x18($a0)
    goto label_0x11bd98;                                        // 0x0011bd74: b 0x11bd98
    *(uint32_t*)((v1) + 4) = v0;                                // 0x0011bd78: sw $v0, 4($v1)
label_0x11bd7c:
    a0 = s2 + 0x104;                                            // 0x0011bd7c: addiu $a0, $s2, 0x104
    func_00107ab8();  // 107ab8                                // 0x0011bd80: jal 0x107ab8
    goto label_0x11bd94;                                        // 0x0011bd88: b 0x11bd94
    g_0024fb84 = s1;  // Global at 0x0024fb84                   // 0x0011bd8c: sw $s1, 4($s2)
label_0x11bd90:
    g_0024fb84 = 0;  // Global at 0x0024fb84                    // 0x0011bd90: sw $zero, 4($s2)
label_0x11bd94:
    a1 = 0x25 << 16;                                            // 0x0011bd94: lui $a1, 0x25
label_0x11bd98:
    s0 = s5 + -0x480;                                           // 0x0011bd98: addiu $s0, $s5, -0x480
    a0 = a1 + -0x280;                                           // 0x0011bd9c: addiu $a0, $a1, -0x280
    local_0 = 0;                                                // 0x0011bda0: sw $zero, 0($sp)
    a1 = 6;                                                     // 0x0011bda4: addiu $a1, $zero, 6
    t0 = 0x200;                                                 // 0x0011bdb0: addiu $t0, $zero, 0x200
    t2 = 8;                                                     // 0x0011bdb8: addiu $t2, $zero, 8
    func_001176a8();  // 1176a8                                // 0x0011bdbc: jal 0x1176a8
    if (v0 >= 0) goto label_0x11bdd8;                           // 0x0011bdc4: bgezl $v0, 0x11bdd8
    v1 = *(int32_t*)((s0) + 4);                                 // 0x0011bdc8: lw $v1, 4($s0)
    v0 = 0xfffe << 16;                                          // 0x0011bdcc: lui $v0, 0xfffe
    goto label_0x11bde0;                                        // 0x0011bdd0: b 0x11bde0
    v0 = v0 | 0xffff;                                           // 0x0011bdd4: ori $v0, $v0, 0xffff
label_0x11bdd8:
    v0 = g_0024fb80;  // Global at 0x0024fb80                   // 0x0011bdd8: lw $v0, -0x480($s4)
    *(uint32_t*)(s6) = v1;                                      // 0x0011bddc: sw $v1, 0($s6)
label_0x11bde0:
    return;                                                     // 0x0011be00: jr $ra
    sp = sp + 0x90;                                             // 0x0011be04: addiu $sp, $sp, 0x90
}
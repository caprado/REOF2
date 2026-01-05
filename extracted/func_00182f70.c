void func_00182f70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x70;                                            // 0x00182f70: addiu $sp, $sp, -0x70
    s1 = 0x8101 << 16;                                          // 0x00182f84: lui $s1, 0x8101
    local_0 = 0;                                                // 0x00182fa0: sw $zero, 0($sp)
    s4 = 0x28 << 16;                                            // 0x00182fa4: lui $s4, 0x28
    s1 = s1 | 0x59;                                             // 0x00182fa8: ori $s1, $s1, 0x59
    /* nop */                                                   // 0x00182fac: nop 
label_0x182fb0:
    v0 = (s0 < 2) ? 1 : 0;                                      // 0x00182fb0: slti $v0, $s0, 2
    if (v0 == 0) goto label_0x18309c;                           // 0x00182fb4: beqz $v0, 0x18309c
    s1 = s4 + -0x7c00;                                          // 0x00182fbc: addiu $s1, $s4, -0x7c00
    func_00187390();  // 187390                                // 0x00182fc8: jal 0x187390
    a3 = 1;                                                     // 0x00182fcc: addiu $a3, $zero, 1
    if (v0 != 0) goto label_0x182fe4;                           // 0x00182fd0: bnez $v0, 0x182fe4
    v1 = s0 << 9;                                               // 0x00182fd4: sll $v1, $s0, 9
    v0 = 0x8101 << 16;                                          // 0x00182fd8: lui $v0, 0x8101
    goto label_0x1830d0;                                        // 0x00182fdc: b 0x1830d0
    v0 = v0 | 0x6f;                                             // 0x00182fe0: ori $v0, $v0, 0x6f
label_0x182fe4:
    v1 = v1 + s1;                                               // 0x00182fe4: addu $v1, $v1, $s1
    v0 = v1 | s3;                                               // 0x00182fe8: or $v0, $v1, $s3
    v0 = v0 & 7;                                                // 0x00182fec: andi $v0, $v0, 7
    if (v0 == 0) goto label_0x183058;                           // 0x00182ff0: beqz $v0, 0x183058
    v0 = v1 + 0x200;                                            // 0x00182ff8: addiu $v0, $v1, 0x200
label_0x182ffc:
    v1 = v1 + 0x20;                                             // 0x0018303c: addiu $v1, $v1, 0x20
    a0 = a0 + 0x20;                                             // 0x00183040: addiu $a0, $a0, 0x20
    /* nop */                                                   // 0x00183044: nop 
    if (v1 != v0) goto label_0x182ffc;                          // 0x00183048: bne $v1, $v0, 0x182ffc
    /* nop */                                                   // 0x0018304c: nop 
    goto label_0x183094;                                        // 0x00183050: b 0x183094
    *(uint8_t*)((s3) + 0x5f) = 0;                               // 0x00183054: sb $zero, 0x5f($s3)
label_0x183058:
    v0 = v1 + 0x200;                                            // 0x00183058: addiu $v0, $v1, 0x200
label_0x18305c:
    v1 = v1 + 0x20;                                             // 0x0018307c: addiu $v1, $v1, 0x20
    a0 = a0 + 0x20;                                             // 0x00183080: addiu $a0, $a0, 0x20
    /* nop */                                                   // 0x00183084: nop 
    if (v1 != v0) goto label_0x18305c;                          // 0x00183088: bne $v1, $v0, 0x18305c
    /* nop */                                                   // 0x0018308c: nop 
    *(uint8_t*)((s3) + 0x5f) = 0;                               // 0x00183090: sb $zero, 0x5f($s3)
label_0x183094:
    goto label_0x1830d0;                                        // 0x00183094: b 0x1830d0
label_0x18309c:
    func_00182bd0();  // 182bd0                                // 0x001830a0: jal 0x182bd0
    v1 = local_0;                                               // 0x001830a8: lw $v1, 0($sp)
    if (v1 != s1) goto label_0x1830c0;                          // 0x001830ac: bne $v1, $s1, 0x1830c0
    v0 = 0x8101 << 16;                                          // 0x001830b4: lui $v0, 0x8101
    goto label_0x1830d0;                                        // 0x001830b8: b 0x1830d0
    v0 = v0 | 2;                                                // 0x001830bc: ori $v0, $v0, 2
label_0x1830c0:
    if (v1 != 0) goto label_0x1830d0;                           // 0x001830c0: bnez $v1, 0x1830d0
    goto label_0x182fb0;                                        // 0x001830c8: b 0x182fb0
    s0 = s0 + -2;                                               // 0x001830cc: addiu $s0, $s0, -2
label_0x1830d0:
    return;                                                     // 0x001830e8: jr $ra
    sp = sp + 0x70;                                             // 0x001830ec: addiu $sp, $sp, 0x70
}
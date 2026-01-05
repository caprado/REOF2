void func_0011c6b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x50;                                            // 0x0011c6b8: addiu $sp, $sp, -0x50
    func_0011ba38();  // 11ba38                                // 0x0011c6d4: jal 0x11ba38
    if (v0 >= 0) goto label_0x11c6ec;                           // 0x0011c6dc: bgez $v0, 0x11c6ec
    a3 = 0x25 << 16;                                            // 0x0011c6e0: lui $a3, 0x25
    goto label_0x11c77c;                                        // 0x0011c6e4: b 0x11c77c
    v0 = 0xffff << 16;                                          // 0x0011c6e8: lui $v0, 0xffff
label_0x11c6ec:
    v1 = a3 + -0x480;                                           // 0x0011c6ec: addiu $v1, $a3, -0x480
    g_0024fb80 = s2;  // Global at 0x0024fb80                   // 0x0011c6f0: sw $s2, -0x480($a3)
    if (s0 != 0) goto label_0x11c708;                           // 0x0011c6f4: bnez $s0, 0x11c708
    g_0024fb84 = s0;  // Global at 0x0024fb84                   // 0x0011c6f8: sw $s0, 4($v1)
    v0 = *(uint8_t*)(s1);                                       // 0x0011c6fc: lbu $v0, 0($s1)
    goto label_0x11c738;                                        // 0x0011c700: b 0x11c738
    g_0024fb88 = v0;  // Global at 0x0024fb88                   // 0x0011c704: sb $v0, 8($v1)
label_0x11c708:
    v0 = 1;                                                     // 0x0011c708: addiu $v0, $zero, 1
    if (s0 != v0) goto label_0x11c720;                          // 0x0011c70c: bne $s0, $v0, 0x11c720
    v0 = 2;                                                     // 0x0011c710: addiu $v0, $zero, 2
    v0 = *(uint16_t*)(s1);                                      // 0x0011c714: lhu $v0, 0($s1)
    goto label_0x11c738;                                        // 0x0011c718: b 0x11c738
    g_0024fb88 = v0;  // Global at 0x0024fb88                   // 0x0011c71c: sh $v0, 8($v1)
label_0x11c720:
    if (s0 == v0) goto label_0x11c734;                          // 0x0011c720: beql $s0, $v0, 0x11c734
    v0 = *(int32_t*)(s1);                                       // 0x0011c724: lw $v0, 0($s1)
    v0 = 0xfffe << 16;                                          // 0x0011c728: lui $v0, 0xfffe
    goto label_0x11c77c;                                        // 0x0011c72c: b 0x11c77c
    v0 = v0 | 0xfffe;                                           // 0x0011c730: ori $v0, $v0, 0xfffe
label_0x11c734:
    g_0024fb88 = v0;  // Global at 0x0024fb88                   // 0x0011c734: sw $v0, 8($v1)
label_0x11c738:
    a3 = a3 + -0x480;                                           // 0x0011c738: addiu $a3, $a3, -0x480
    a0 = 0x25 << 16;                                            // 0x0011c73c: lui $a0, 0x25
    a0 = a0 + -0x280;                                           // 0x0011c740: addiu $a0, $a0, -0x280
    local_0 = 0;                                                // 0x0011c744: sw $zero, 0($sp)
    a1 = 2;                                                     // 0x0011c748: addiu $a1, $zero, 2
    t0 = 0x20;                                                  // 0x0011c750: addiu $t0, $zero, 0x20
    t2 = 0x10;                                                  // 0x0011c758: addiu $t2, $zero, 0x10
    func_001176a8();  // 1176a8                                // 0x0011c75c: jal 0x1176a8
    a0 = 0xfffe << 16;                                          // 0x0011c764: lui $a0, 0xfffe
    v1 = -1;                                                    // 0x0011c768: addiu $v1, $zero, -1
    v1 = (v1 < v0) ? 1 : 0;                                     // 0x0011c76c: slt $v1, $v1, $v0
    a0 = a0 | 0xffff;                                           // 0x0011c770: ori $a0, $a0, 0xffff
    if (v1 != 0) v0 = 0;                                        // 0x0011c778: movn $v0, $zero, $v1
label_0x11c77c:
    return;                                                     // 0x0011c78c: jr $ra
    sp = sp + 0x50;                                             // 0x0011c790: addiu $sp, $sp, 0x50
}
void func_00126650() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x40;                                            // 0x00126650: addiu $sp, $sp, -0x40
    a3 = sp + 1;                                                // 0x00126668: addiu $a3, $sp, 1
    func_001265d8();  // 1265d8                                // 0x0012667c: jal 0x1265d8
    if (v0 != 0) goto label_0x126768;                           // 0x00126684: bnez $v0, 0x126768
    v0 = -1;                                                    // 0x00126688: addiu $v0, $zero, -1
    v0 = local_0;                                               // 0x0012668c: lbu $v0, 0($sp)
    v0 = ((unsigned)v0 < (unsigned)4) ? 1 : 0;                  // 0x00126690: sltiu $v0, $v0, 4
    /* bnezl $v0, 0x126758 */                                   // 0x00126694: bnezl $v0, 0x126758
    *(uint16_t*)((s3) + 2) = 0;                                 // 0x00126698: sh $zero, 2($s3)
    v1 = (s1 < 0x20) ? 1 : 0;                                   // 0x0012669c: slti $v1, $s1, 0x20
    if (v1 != 0) goto label_0x126768;                           // 0x001266a0: bnez $v1, 0x126768
    v0 = -1;                                                    // 0x001266a4: addiu $v0, $zero, -1
    v1 = *(uint16_t*)(s0);                                      // 0x001266a8: lhu $v1, 0($s0)
    a1 = 0 | 0x8000;                                            // 0x001266ac: ori $a1, $zero, 0x8000
    a2 = -0x100;                                                // 0x001266b0: addiu $a2, $zero, -0x100
    a0 = v1 << 8;                                               // 0x001266b4: sll $a0, $v1, 8
    v1 = (unsigned)v1 >> 8;                                     // 0x001266b8: srl $v1, $v1, 8
    v1 = v1 | a0;                                               // 0x001266bc: or $v1, $v1, $a0
    v1 = v1 & 0xffff;                                           // 0x001266c0: andi $v1, $v1, 0xffff
    if (v1 != a1) goto label_0x126768;                          // 0x001266c4: bne $v1, $a1, 0x126768
    v0 = -2;                                                    // 0x001266c8: addiu $v0, $zero, -2
    a0 = *(uint16_t*)((s0) + 2);                                // 0x001266cc: lhu $a0, 2($s0)
    v1 = *(uint8_t*)((s0) + 3);                                 // 0x001266d0: lbu $v1, 3($s0)
    a0 = a0 << 8;                                               // 0x001266d4: sll $a0, $a0, 8
    a0 = a0 & a2;                                               // 0x001266d8: and $a0, $a0, $a2
    v1 = v1 | a0;                                               // 0x001266dc: or $v1, $v1, $a0
    v1 = v1 << 0x10;                                            // 0x001266e0: sll $v1, $v1, 0x10
    v1 = v1 >> 0x10;                                            // 0x001266e4: sra $v1, $v1, 0x10
    v1 = (v1 < 0x1c) ? 1 : 0;                                   // 0x001266e8: slti $v1, $v1, 0x1c
    if (v1 != 0) goto label_0x126768;                           // 0x001266ec: bnez $v1, 0x126768
    v0 = -1;                                                    // 0x001266f0: addiu $v0, $zero, -1
    v0 = *(uint16_t*)((s0) + 0x18);                             // 0x001266f4: lhu $v0, 0x18($s0)
    v1 = v0 << 8;                                               // 0x001266f8: sll $v1, $v0, 8
    v0 = (unsigned)v0 >> 8;                                     // 0x001266fc: srl $v0, $v0, 8
    v1 = v1 & a2;                                               // 0x00126700: and $v1, $v1, $a2
    v0 = v0 | v1;                                               // 0x00126704: or $v0, $v0, $v1
    *(uint16_t*)(s2) = v0;                                      // 0x00126708: sh $v0, 0($s2)
    v1 = *(uint16_t*)((s0) + 0x1a);                             // 0x0012670c: lhu $v1, 0x1a($s0)
    v0 = v1 << 8;                                               // 0x00126710: sll $v0, $v1, 8
    v1 = (unsigned)v1 >> 8;                                     // 0x00126714: srl $v1, $v1, 8
    v0 = v0 & a2;                                               // 0x00126718: and $v0, $v0, $a2
    v1 = v1 | v0;                                               // 0x0012671c: or $v1, $v1, $v0
    *(uint16_t*)(s3) = v1;                                      // 0x00126720: sh $v1, 0($s3)
    v0 = *(uint16_t*)((s0) + 0x1c);                             // 0x00126724: lhu $v0, 0x1c($s0)
    v1 = v0 << 8;                                               // 0x00126728: sll $v1, $v0, 8
    v0 = (unsigned)v0 >> 8;                                     // 0x0012672c: srl $v0, $v0, 8
    v1 = v1 & a2;                                               // 0x00126730: and $v1, $v1, $a2
    v0 = v0 | v1;                                               // 0x00126734: or $v0, $v0, $v1
    *(uint16_t*)((s2) + 2) = v0;                                // 0x00126738: sh $v0, 2($s2)
    v1 = *(uint16_t*)((s0) + 0x1e);                             // 0x0012673c: lhu $v1, 0x1e($s0)
    v0 = v1 << 8;                                               // 0x00126740: sll $v0, $v1, 8
    v1 = (unsigned)v1 >> 8;                                     // 0x00126744: srl $v1, $v1, 8
    v0 = v0 & a2;                                               // 0x00126748: and $v0, $v0, $a2
    v1 = v1 | v0;                                               // 0x0012674c: or $v1, $v1, $v0
    goto label_0x126764;                                        // 0x00126750: b 0x126764
    *(uint16_t*)((s3) + 2) = v1;                                // 0x00126754: sh $v1, 2($s3)
    *(uint16_t*)((s2) + 2) = 0;                                 // 0x00126758: sh $zero, 2($s2)
    *(uint16_t*)(s3) = 0;                                       // 0x0012675c: sh $zero, 0($s3)
    *(uint16_t*)(s2) = 0;                                       // 0x00126760: sh $zero, 0($s2)
label_0x126764:
label_0x126768:
    return;                                                     // 0x0012677c: jr $ra
    sp = sp + 0x40;                                             // 0x00126780: addiu $sp, $sp, 0x40
}
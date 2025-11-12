void func_001265d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = (a1 < 0x14) ? 1 : 0;                                   // 0x001265d8: slti $a1, $a1, 0x14
    if (a1 != 0) goto label_0x126648;                           // 0x001265e0: bnez $a1, 0x126648
    v0 = -1;                                                    // 0x001265e4: addiu $v0, $zero, -1
    v1 = *(uint16_t*)(t0);                                      // 0x001265e8: lhu $v1, 0($t0)
    a1 = 0 | 0x8000;                                            // 0x001265ec: ori $a1, $zero, 0x8000
    a0 = v1 << 8;                                               // 0x001265f0: sll $a0, $v1, 8
    v1 = (unsigned)v1 >> 8;                                     // 0x001265f4: srl $v1, $v1, 8
    v1 = v1 | a0;                                               // 0x001265f8: or $v1, $v1, $a0
    v1 = v1 & 0xffff;                                           // 0x001265fc: andi $v1, $v1, 0xffff
    if (v1 != a1) goto label_0x126648;                          // 0x00126600: bne $v1, $a1, 0x126648
    v0 = -2;                                                    // 0x00126604: addiu $v0, $zero, -2
    v1 = *(uint16_t*)((t0) + 2);                                // 0x00126608: lhu $v1, 2($t0)
    a1 = -0x100;                                                // 0x0012660c: addiu $a1, $zero, -0x100
    a0 = *(uint8_t*)((t0) + 3);                                 // 0x00126610: lbu $a0, 3($t0)
    v1 = v1 << 8;                                               // 0x00126614: sll $v1, $v1, 8
    v1 = v1 & a1;                                               // 0x00126618: and $v1, $v1, $a1
    a0 = a0 | v1;                                               // 0x0012661c: or $a0, $a0, $v1
    a0 = a0 << 0x10;                                            // 0x00126620: sll $a0, $a0, 0x10
    a0 = a0 >> 0x10;                                            // 0x00126624: sra $a0, $a0, 0x10
    a0 = (a0 < 0x10) ? 1 : 0;                                   // 0x00126628: slti $a0, $a0, 0x10
    if (a0 != 0) goto label_0x126648;                           // 0x0012662c: bnez $a0, 0x126648
    v0 = -1;                                                    // 0x00126630: addiu $v0, $zero, -1
    a0 = *(uint8_t*)((t0) + 0x12);                              // 0x00126634: lbu $a0, 0x12($t0)
    *(uint8_t*)(a2) = a0;                                       // 0x0012663c: sb $a0, 0($a2)
    v1 = *(uint8_t*)((t0) + 0x13);                              // 0x00126640: lbu $v1, 0x13($t0)
    *(uint8_t*)(a3) = v1;                                       // 0x00126644: sb $v1, 0($a3)
label_0x126648:
    return;                                                     // 0x00126648: jr $ra
    /* nop */                                                   // 0x0012664c: nop 
}
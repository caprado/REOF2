/** @category audio/settings @status complete @author caprado */
void func_001a7690() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers

    at = 0x2a << 16;                                            // 0x001a7690: lui $at, 0x2a
    v0 = 0x2a << 16;                                            // 0x001a7694: lui $v0, 0x2a
    a1 = *(int32_t*)((at) + 0xf70);                             // 0x001a7698: lw $a1, 0xf70($at)
    v0 = v0 + 0xf80;                                            // 0x001a769c: addiu $v0, $v0, 0xf80
    v1 = a1 << 1;                                               // 0x001a76a0: sll $v1, $a1, 1
    v1 = v1 + a1;                                               // 0x001a76a4: addu $v1, $v1, $a1
    v1 = v1 << 2;                                               // 0x001a76a8: sll $v1, $v1, 2
    a1 = v0 + v1;                                               // 0x001a76ac: addu $a1, $v0, $v1
    v0 = *(int32_t*)(a1);                                       // 0x001a76b0: lw $v0, 0($a1)
    if (v0 < 0) goto label_0x1a76c4;                            // 0x001a76b4: bltz $v0, 0x1a76c4
    v1 = ((unsigned)0 < (unsigned)a0) ? 1 : 0;                  // 0x001a76b8: sltu $v1, $zero, $a0
    goto label_0x1a7708;                                        // 0x001a76bc: b 0x1a7708
    v0 = -1;                                                    // 0x001a76c0: addiu $v0, $zero, -1
label_0x1a76c4:
    v0 = 0x4200 << 16;                                          // 0x001a76c4: lui $v0, 0x4200
    v1 = v1 << 0x10;                                            // 0x001a76c8: sll $v1, $v1, 0x10
    at = 0x2a << 16;                                            // 0x001a76cc: lui $at, 0x2a
    v0 = v1 | v0;                                               // 0x001a76d8: or $v0, $v1, $v0
    *(uint32_t*)(a1) = v0;                                      // 0x001a76dc: sw $v0, 0($a1)
    v0 = *(int32_t*)((at) + 0xf70);                             // 0x001a76e0: lw $v0, 0xf70($at)
    v1 = v0 + 1;                                                // 0x001a76e4: addiu $v1, $v0, 1
    if (v1 >= 0) goto label_0x1a76fc;                           // 0x001a76e8: bgez $v1, 0x1a76fc
    v0 = v1 & 0x1f;                                             // 0x001a76ec: andi $v0, $v1, 0x1f
    if (v0 == 0) goto label_0x1a76fc;                           // 0x001a76f0: beqz $v0, 0x1a76fc
    /* nop */                                                   // 0x001a76f4: nop
    v0 = v0 + -0x20;                                            // 0x001a76f8: addiu $v0, $v0, -0x20
label_0x1a76fc:
    at = 0x2a << 16;                                            // 0x001a76fc: lui $at, 0x2a
    *(uint32_t*)((at) + 0xf70) = v0;                            // 0x001a7700: sw $v0, 0xf70($at)
label_0x1a7708:
    return;                                                     // 0x001a7708: jr $ra
}

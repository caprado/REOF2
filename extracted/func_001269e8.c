void func_001269e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x50;                                            // 0x001269e8: addiu $sp, $sp, -0x50
    *(uint32_t*)(s2) = 0;                                       // 0x00126a24: sw $zero, 0($s2)
    func_00126650();  // 0x1265d8                                // 0x00126a28: jal 0x1265d8
    a3 = sp + 1;                                                // 0x00126a2c: addiu $a3, $sp, 1
    /* bnezl $v0, 0x126bbc */                                   // 0x00126a30: bnezl $v0, 0x126bbc
    v1 = local_0;                                               // 0x00126a38: lbu $v1, 0($sp)
    a2 = 0x3c;                                                  // 0x00126a3c: addiu $a2, $zero, 0x3c
    a0 = 0x48;                                                  // 0x00126a40: addiu $a0, $zero, 0x48
    a3 = v1 ^ 4;                                                // 0x00126a44: xori $a3, $v1, 4
    if (a3 == 0) a2 = a0;                                       // 0x00126a48: movz $a2, $a0, $a3
    v1 = (s1 < a2) ? 1 : 0;                                     // 0x00126a4c: slt $v1, $s1, $a2
    /* bnezl $v1, 0x126bb8 */                                   // 0x00126a50: bnezl $v1, 0x126bb8
    v0 = -1;                                                    // 0x00126a54: addiu $v0, $zero, -1
    v1 = *(uint16_t*)(s0);                                      // 0x00126a58: lhu $v1, 0($s0)
    a1 = 0 | 0x8000;                                            // 0x00126a5c: ori $a1, $zero, 0x8000
    a0 = v1 << 8;                                               // 0x00126a60: sll $a0, $v1, 8
    v1 = (unsigned)v1 >> 8;                                     // 0x00126a64: srl $v1, $v1, 8
    v1 = v1 | a0;                                               // 0x00126a68: or $v1, $v1, $a0
    v1 = v1 & 0xffff;                                           // 0x00126a6c: andi $v1, $v1, 0xffff
    if (v1 != a1) goto label_0x126af8;                          // 0x00126a70: bne $v1, $a1, 0x126af8
    t2 = -0x100;                                                // 0x00126a74: addiu $t2, $zero, -0x100
    v1 = *(uint16_t*)((s0) + 2);                                // 0x00126a78: lhu $v1, 2($s0)
    a1 = a2 + -4;                                               // 0x00126a7c: addiu $a1, $a2, -4
    a0 = *(uint8_t*)((s0) + 3);                                 // 0x00126a80: lbu $a0, 3($s0)
    v1 = v1 << 8;                                               // 0x00126a84: sll $v1, $v1, 8
    v1 = v1 & t2;                                               // 0x00126a88: and $v1, $v1, $t2
    a0 = a0 | v1;                                               // 0x00126a8c: or $a0, $a0, $v1
    a0 = a0 << 0x10;                                            // 0x00126a90: sll $a0, $a0, 0x10
    a0 = a0 >> 0x10;                                            // 0x00126a94: sra $a0, $a0, 0x10
    a0 = (a0 < a1) ? 1 : 0;                                     // 0x00126a98: slt $a0, $a0, $a1
    if (a0 == 0) goto label_0x126ab0;                           // 0x00126a9c: beqz $a0, 0x126ab0
    v1 = 0x20;                                                  // 0x00126aa0: addiu $v1, $zero, 0x20
    goto label_0x126bb8;                                        // 0x00126aa4: b 0x126bb8
    v0 = -1;                                                    // 0x00126aa8: addiu $v0, $zero, -1
    /* nop */                                                   // 0x00126aac: nop 
label_0x126ab0:
    t1 = 0x14;                                                  // 0x00126ab0: addiu $t1, $zero, 0x14
    if (a3 == 0) t1 = v1;                                       // 0x00126ab4: movz $t1, $v1, $a3
    t0 = 0x4149 << 16;                                          // 0x00126ab8: lui $t0, 0x4149
    t1 = t1 + 4;                                                // 0x00126abc: addiu $t1, $t1, 4
    t0 = t0 | 0x4e46;                                           // 0x00126ac0: ori $t0, $t0, 0x4e46
    a1 = s0 + t1;                                               // 0x00126ac4: addu $a1, $s0, $t1
    a2 = *(uint8_t*)((a1) + 1);                                 // 0x00126ac8: lbu $a2, 1($a1)
    v1 = *(uint8_t*)(a1);                                       // 0x00126acc: lbu $v1, 0($a1)
    a0 = *(uint8_t*)((a1) + 2);                                 // 0x00126ad0: lbu $a0, 2($a1)
    a2 = a2 << 0x10;                                            // 0x00126ad4: sll $a2, $a2, 0x10
    a3 = *(uint8_t*)((a1) + 3);                                 // 0x00126ad8: lbu $a3, 3($a1)
    v1 = v1 << 0x18;                                            // 0x00126adc: sll $v1, $v1, 0x18
    a0 = a0 << 8;                                               // 0x00126ae0: sll $a0, $a0, 8
    v1 = v1 | a3;                                               // 0x00126ae4: or $v1, $v1, $a3
    a0 = a0 | a2;                                               // 0x00126ae8: or $a0, $a0, $a2
    v1 = v1 | a0;                                               // 0x00126aec: or $v1, $v1, $a0
    if (v1 == t0) goto label_0x126b00;                          // 0x00126af0: beq $v1, $t0, 0x126b00
    t1 = t1 + 4;                                                // 0x00126af4: addiu $t1, $t1, 4
label_0x126af8:
    goto label_0x126bb8;                                        // 0x00126af8: b 0x126bb8
    v0 = -2;                                                    // 0x00126afc: addiu $v0, $zero, -2
label_0x126b00:
    v1 = s0 + t1;                                               // 0x00126b00: addu $v1, $s0, $t1
    t1 = t1 + 4;                                                // 0x00126b04: addiu $t1, $t1, 4
    a1 = *(int32_t*)(v1);                                       // 0x00126b08: lw $a1, 0($v1)
    a3 = 0xff << 16;                                            // 0x00126b0c: lui $a3, 0xff
    t0 = s0 + t1;                                               // 0x00126b10: addu $t0, $s0, $t1
    t1 = t1 + 0x10;                                             // 0x00126b14: addiu $t1, $t1, 0x10
    a2 = a1 >> 8;                                               // 0x00126b18: sra $a2, $a1, 8
    a0 = a1 << 8;                                               // 0x00126b1c: sll $a0, $a1, 8
    a0 = a0 & a3;                                               // 0x00126b20: and $a0, $a0, $a3
    a2 = a2 & 0xff00;                                           // 0x00126b24: andi $a2, $a2, 0xff00
    v1 = (unsigned)a1 >> 0x18;                                  // 0x00126b28: srl $v1, $a1, 0x18
    a1 = a1 << 0x18;                                            // 0x00126b2c: sll $a1, $a1, 0x18
    a0 = a0 | a2;                                               // 0x00126b30: or $a0, $a0, $a2
    v1 = v1 | a1;                                               // 0x00126b34: or $v1, $v1, $a1
    v1 = v1 | a0;                                               // 0x00126b38: or $v1, $v1, $a0
    a1 = s0 + t1;                                               // 0x00126b3c: addu $a1, $s0, $t1
    *(uint32_t*)(s2) = v1;                                      // 0x00126b40: sw $v1, 0($s2)
    t1 = t1 + 4;                                                // 0x00126b44: addiu $t1, $t1, 4
    a2 = s0 + t1;                                               // 0x00126b48: addu $a2, $s0, $t1
    a3 = t1 + s0;                                               // 0x00126b4c: addu $a3, $t1, $s0
    v1 = *(uint16_t*)(a1);                                      // 0x00126b70: lhu $v1, 0($a1)
    a0 = *(uint8_t*)((a1) + 1);                                 // 0x00126b74: lbu $a0, 1($a1)
    v1 = v1 << 8;                                               // 0x00126b78: sll $v1, $v1, 8
    v1 = v1 & t2;                                               // 0x00126b7c: and $v1, $v1, $t2
    a0 = a0 | v1;                                               // 0x00126b80: or $a0, $a0, $v1
    *(uint16_t*)(s5) = a0;                                      // 0x00126b84: sh $a0, 0($s5)
    v1 = *(uint16_t*)(a2);                                      // 0x00126b88: lhu $v1, 0($a2)
    a0 = *(uint8_t*)((a2) + 1);                                 // 0x00126b8c: lbu $a0, 1($a2)
    v1 = v1 << 8;                                               // 0x00126b90: sll $v1, $v1, 8
    v1 = v1 & t2;                                               // 0x00126b94: and $v1, $v1, $t2
    a0 = a0 | v1;                                               // 0x00126b98: or $a0, $a0, $v1
    *(uint16_t*)(s3) = a0;                                      // 0x00126b9c: sh $a0, 0($s3)
    v1 = g_00ff0002;  // Global at 0x00ff0002                   // 0x00126ba0: lhu $v1, 2($a3)
    a0 = g_00ff0003;  // Global at 0x00ff0003                   // 0x00126ba4: lbu $a0, 3($a3)
    v1 = v1 << 8;                                               // 0x00126ba8: sll $v1, $v1, 8
    v1 = v1 & t2;                                               // 0x00126bac: and $v1, $v1, $t2
    a0 = a0 | v1;                                               // 0x00126bb0: or $a0, $a0, $v1
    *(uint16_t*)((s3) + 2) = a0;                                // 0x00126bb4: sh $a0, 2($s3)
label_0x126bb8:
    return;                                                     // 0x00126bd4: jr $ra
    sp = sp + 0x50;                                             // 0x00126bd8: addiu $sp, $sp, 0x50
}
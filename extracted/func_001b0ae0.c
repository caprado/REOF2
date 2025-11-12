void func_001b0ae0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b0ae0: addiu $sp, $sp, -0x10
    a0 = 0x31 << 16;                                            // 0x001b0ae4: lui $a0, 0x31
    at = 0x31 << 16;                                            // 0x001b0aec: lui $at, 0x31
    t0 = g_00313600;  // Global at 0x00313600                   // 0x001b0af0: lw $t0, 0x3600($at)
    a0 = a0 + 0x35f0;                                           // 0x001b0af4: addiu $a0, $a0, 0x35f0
    at = 0x31 << 16;                                            // 0x001b0af8: lui $at, 0x31
    a3 = g_003135fc;  // Global at 0x003135fc                   // 0x001b0afc: lw $a3, 0x35fc($at)
    at = 0x31 << 16;                                            // 0x001b0b00: lui $at, 0x31
    a2 = g_003135f8;  // Global at 0x003135f8                   // 0x001b0b04: lw $a2, 0x35f8($at)
    at = 0x31 << 16;                                            // 0x001b0b08: lui $at, 0x31
    a1 = g_003136e8;  // Global at 0x003136e8                   // 0x001b0b0c: lw $a1, 0x36e8($at)
    at = 0x31 << 16;                                            // 0x001b0b10: lui $at, 0x31
    v1 = g_00313704;  // Global at 0x00313704                   // 0x001b0b14: lh $v1, 0x3704($at)
    at = 0x31 << 16;                                            // 0x001b0b18: lui $at, 0x31
    v0 = g_00313706;  // Global at 0x00313706                   // 0x001b0b1c: lh $v0, 0x3706($at)
    at = 0x31 << 16;                                            // 0x001b0b20: lui $at, 0x31
    g_00313604 = t0;  // Global at 0x00313604                   // 0x001b0b24: sw $t0, 0x3604($at)
    at = 0x31 << 16;                                            // 0x001b0b28: lui $at, 0x31
    g_00313600 = a3;  // Global at 0x00313600                   // 0x001b0b2c: sw $a3, 0x3600($at)
    at = 0x31 << 16;                                            // 0x001b0b30: lui $at, 0x31
    g_003135fc = a2;  // Global at 0x003135fc                   // 0x001b0b34: sw $a2, 0x35fc($at)
    at = 0x31 << 16;                                            // 0x001b0b38: lui $at, 0x31
    g_003135f8 = a1;  // Global at 0x003135f8                   // 0x001b0b3c: sw $a1, 0x35f8($at)
    at = 0x31 << 16;                                            // 0x001b0b40: lui $at, 0x31
    g_00313614 = v1;  // Global at 0x00313614                   // 0x001b0b44: sh $v1, 0x3614($at)
    at = 0x31 << 16;                                            // 0x001b0b48: lui $at, 0x31
    g_00313616 = v0;  // Global at 0x00313616                   // 0x001b0b4c: sh $v0, 0x3616($at)
    at = 0x31 << 16;                                            // 0x001b0b50: lui $at, 0x31
    t2 = g_003135fc;  // Global at 0x003135fc                   // 0x001b0b54: lw $t2, 0x35fc($at)
    at = 0x31 << 16;                                            // 0x001b0b58: lui $at, 0x31
    t1 = ~t2;                                                   // 0x001b0b5c: not $t1, $t2
    t0 = g_003135f8;  // Global at 0x003135f8                   // 0x001b0b60: lw $t0, 0x35f8($at)
    at = 0x31 << 16;                                            // 0x001b0b64: lui $at, 0x31
    t1 = t0 & t1;                                               // 0x001b0b68: and $t1, $t0, $t1
    a3 = g_0031370c;  // Global at 0x0031370c                   // 0x001b0b6c: lh $a3, 0x370c($at)
    t0 = ~t0;                                                   // 0x001b0b70: not $t0, $t0
    t0 = t2 & t0;                                               // 0x001b0b74: and $t0, $t2, $t0
    at = 0x31 << 16;                                            // 0x001b0b78: lui $at, 0x31
    a2 = g_0031370e;  // Global at 0x0031370e                   // 0x001b0b7c: lh $a2, 0x370e($at)
    at = 0x31 << 16;                                            // 0x001b0b80: lui $at, 0x31
    a1 = g_00313700;  // Global at 0x00313700                   // 0x001b0b84: lh $a1, 0x3700($at)
    at = 0x31 << 16;                                            // 0x001b0b88: lui $at, 0x31
    v1 = g_00313708;  // Global at 0x00313708                   // 0x001b0b8c: lh $v1, 0x3708($at)
    at = 0x31 << 16;                                            // 0x001b0b90: lui $at, 0x31
    v0 = g_00313702;  // Global at 0x00313702                   // 0x001b0b94: lh $v0, 0x3702($at)
    at = 0x31 << 16;                                            // 0x001b0b98: lui $at, 0x31
    g_003135f0 = t1;  // Global at 0x003135f0                   // 0x001b0b9c: sw $t1, 0x35f0($at)
    at = 0x31 << 16;                                            // 0x001b0ba0: lui $at, 0x31
    g_003135f4 = t0;  // Global at 0x003135f4                   // 0x001b0ba4: sw $t0, 0x35f4($at)
    at = 0x31 << 16;                                            // 0x001b0ba8: lui $at, 0x31
    g_0031361c = a3;  // Global at 0x0031361c                   // 0x001b0bac: sh $a3, 0x361c($at)
    at = 0x31 << 16;                                            // 0x001b0bb0: lui $at, 0x31
    g_0031361e = a2;  // Global at 0x0031361e                   // 0x001b0bb4: sh $a2, 0x361e($at)
    at = 0x31 << 16;                                            // 0x001b0bb8: lui $at, 0x31
    g_00313610 = a1;  // Global at 0x00313610                   // 0x001b0bbc: sh $a1, 0x3610($at)
    at = 0x31 << 16;                                            // 0x001b0bc0: lui $at, 0x31
    g_00313618 = v1;  // Global at 0x00313618                   // 0x001b0bc4: sh $v1, 0x3618($at)
    at = 0x31 << 16;                                            // 0x001b0bc8: lui $at, 0x31
    g_00313612 = v0;  // Global at 0x00313612                   // 0x001b0bcc: sh $v0, 0x3612($at)
    at = 0x31 << 16;                                            // 0x001b0bd0: lui $at, 0x31
    v0 = g_0031370a;  // Global at 0x0031370a                   // 0x001b0bd4: lh $v0, 0x370a($at)
    at = 0x31 << 16;                                            // 0x001b0bd8: lui $at, 0x31
    func_001b0720();  // 0x1b06a0                                // 0x001b0bdc: jal 0x1b06a0
    g_0031361a = v0;  // Global at 0x0031361a                   // 0x001b0be0: sh $v0, 0x361a($at)
    at = 0x31 << 16;                                            // 0x001b0be4: lui $at, 0x31
    a2 = 0x22 << 16;                                            // 0x001b0be8: lui $a2, 0x22
    t5 = g_003135f0;  // Global at 0x003135f0                   // 0x001b0bec: lw $t5, 0x35f0($at)
    t4 = 0xf << 16;                                             // 0x001b0bf0: lui $t4, 0xf
    a1 = 0x22 << 16;                                            // 0x001b0bf4: lui $a1, 0x22
    a0 = 0x22 << 16;                                            // 0x001b0bf8: lui $a0, 0x22
    a2 = a2 + -0x3ea0;                                          // 0x001b0bfc: addiu $a2, $a2, -0x3ea0
    a1 = a1 + -0x3e9c;                                          // 0x001b0c00: addiu $a1, $a1, -0x3e9c
    a0 = a0 + -0x3e98;                                          // 0x001b0c04: addiu $a0, $a0, -0x3e98
    at = 0x31 << 16;                                            // 0x001b0c08: lui $at, 0x31
    a3 = t5 & t4;                                               // 0x001b0c0c: and $a3, $t5, $t4
    t2 = g_003135f8;  // Global at 0x003135f8                   // 0x001b0c10: lw $t2, 0x35f8($at)
    t3 = (unsigned)a3 >> 0x10;                                  // 0x001b0c14: srl $t3, $a3, 0x10
    t3 = t5 | t3;                                               // 0x001b0c18: or $t3, $t5, $t3
    at = 0x31 << 16;                                            // 0x001b0c1c: lui $at, 0x31
    a3 = t2 & t4;                                               // 0x001b0c20: and $a3, $t2, $t4
    t1 = g_00313608;  // Global at 0x00313608                   // 0x001b0c24: lw $t1, 0x3608($at)
    a3 = (unsigned)a3 >> 0x10;                                  // 0x001b0c28: srl $a3, $a3, 0x10
    a3 = t2 | a3;                                               // 0x001b0c2c: or $a3, $t2, $a3
    at = 0x31 << 16;                                            // 0x001b0c30: lui $at, 0x31
    t0 = g_003137cc;  // Global at 0x003137cc                   // 0x001b0c34: lbu $t0, 0x37cc($at)
    at = 0x31 << 16;                                            // 0x001b0c38: lui $at, 0x31
    g_003135f0 = t3;  // Global at 0x003135f0                   // 0x001b0c3c: sw $t3, 0x35f0($at)
    at = 0x31 << 16;                                            // 0x001b0c40: lui $at, 0x31
    g_003135f8 = a3;  // Global at 0x003135f8                   // 0x001b0c44: sw $a3, 0x35f8($at)
    a3 = t1 & t4;                                               // 0x001b0c48: and $a3, $t1, $t4
    at = 0x31 << 16;                                            // 0x001b0c4c: lui $at, 0x31
    a3 = (unsigned)a3 >> 0x10;                                  // 0x001b0c50: srl $a3, $a3, 0x10
    t2 = g_003135f0;  // Global at 0x003135f0                   // 0x001b0c54: lw $t2, 0x35f0($at)
    t1 = t1 | a3;                                               // 0x001b0c58: or $t1, $t1, $a3
    a3 = t0 << 1;                                               // 0x001b0c5c: sll $a3, $t0, 1
    a3 = a3 + t0;                                               // 0x001b0c60: addu $a3, $a3, $t0
    t0 = a3 << 2;                                               // 0x001b0c64: sll $t0, $a3, 2
    a3 = a2 + t0;                                               // 0x001b0c68: addu $a3, $a2, $t0
    at = 0x31 << 16;                                            // 0x001b0c6c: lui $at, 0x31
    a2 = a1 + t0;                                               // 0x001b0c70: addu $a2, $a1, $t0
    g_00313608 = t1;  // Global at 0x00313608                   // 0x001b0c74: sw $t1, 0x3608($at)
    a1 = a0 + t0;                                               // 0x001b0c78: addu $a1, $a0, $t0
    a3 = *(int32_t*)(a3);                                       // 0x001b0c7c: lw $a3, 0($a3)
    a0 = t2 & 0x100;                                            // 0x001b0c80: andi $a0, $t2, 0x100
    a2 = g_0021c160;  // Global at 0x0021c160                   // 0x001b0c84: lw $a2, 0($a2)
    a1 = g_0021c164;  // Global at 0x0021c164                   // 0x001b0c88: lw $a1, 0($a1)
    if (a0 == 0) goto label_0x1b0c98;                           // 0x001b0c8c: beqz $a0, 0x1b0c98
    v1 = v1 | a3;                                               // 0x001b0c94: or $v1, $v1, $a3
label_0x1b0c98:
    a0 = t2 & 0x10;                                             // 0x001b0c98: andi $a0, $t2, 0x10
    if (a0 == 0) goto label_0x1b0ca8;                           // 0x001b0c9c: beqz $a0, 0x1b0ca8
    a0 = t2 & 0x20;                                             // 0x001b0ca0: andi $a0, $t2, 0x20
    v1 = v1 | a2;                                               // 0x001b0ca4: or $v1, $v1, $a2
label_0x1b0ca8:
    if (a0 == 0) goto label_0x1b0cb4;                           // 0x001b0ca8: beqz $a0, 0x1b0cb4
    /* nop */                                                   // 0x001b0cac: nop 
    v1 = v1 | a1;                                               // 0x001b0cb0: or $v1, $v1, $a1
label_0x1b0cb4:
    a0 = -0x131;                                                // 0x001b0cb4: addiu $a0, $zero, -0x131
    at = 0x49 << 16;                                            // 0x001b0cb8: lui $at, 0x49
    a0 = t2 & a0;                                               // 0x001b0cbc: and $a0, $t2, $a0
    v1 = a0 | v1;                                               // 0x001b0cc0: or $v1, $a0, $v1
    g_00491360 = v1;  // Global at 0x00491360                   // 0x001b0cc4: sw $v1, 0x1360($at)
    return;                                                     // 0x001b0ccc: jr $ra
    sp = sp + 0x10;                                             // 0x001b0cd0: addiu $sp, $sp, 0x10
}
void func_0012e090() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a2 = a2 << 0x10;                                            // 0x0012e090: sll $a2, $a2, 0x10
    if (a1 != 0) goto label_0x12e0d8;                           // 0x0012e098: bnez $a1, 0x12e0d8
    t1 = a2 >> 0x10;                                            // 0x0012e09c: sra $t1, $a2, 0x10
    v1 = *(int32_t*)((t0) + 0x14);                              // 0x0012e0a0: lw $v1, 0x14($t0)
    v0 = (a1 < v1) ? 1 : 0;                                     // 0x0012e0a4: slt $v0, $a1, $v1
    /* beqzl $v0, 0x12e0d8 */                                   // 0x0012e0a8: beqzl $v0, 0x12e0d8
    *(uint32_t*)((t0) + 0x78) = 0;                              // 0x0012e0ac: sw $zero, 0x78($t0)
    v0 = t0 + 0x18;                                             // 0x0012e0b0: addiu $v0, $t0, 0x18
    /* nop */                                                   // 0x0012e0b4: nop 
label_0x12e0b8:
    v1 = v1 + -1;                                               // 0x0012e0b8: addiu $v1, $v1, -1
    *(uint16_t*)(v0) = 0;                                       // 0x0012e0bc: sh $zero, 0($v0)
    /* nop */                                                   // 0x0012e0c0: nop 
    /* nop */                                                   // 0x0012e0c4: nop 
    /* nop */                                                   // 0x0012e0c8: nop 
    if (v1 != 0) goto label_0x12e0b8;                           // 0x0012e0cc: bnez $v1, 0x12e0b8
    v0 = v0 + 2;                                                // 0x0012e0d0: addiu $v0, $v0, 2
    *(uint32_t*)((t0) + 0x78) = 0;                              // 0x0012e0d4: sw $zero, 0x78($t0)
label_0x12e0d8:
    if (t0 == 0) goto label_0x12e16c;                           // 0x0012e0d8: beqz $t0, 0x12e16c
    /* nop */                                                   // 0x0012e0dc: nop 
    v0 = *(int16_t*)((t0) + 4);                                 // 0x0012e0e0: lh $v0, 4($t0)
    a0 = a1 << 1;                                               // 0x0012e0e4: sll $a0, $a1, 1
    a3 = *(int16_t*)((t0) + 8);                                 // 0x0012e0e8: lh $a3, 8($t0)
    a1 = 0x7fff;                                                // 0x0012e0ec: addiu $a1, $zero, 0x7fff
    a2 = *(int16_t*)((t0) + 0xa);                               // 0x0012e0f0: lh $a2, 0xa($t0)
    a0 = a0 + t0;                                               // 0x0012e0f4: addu $a0, $a0, $t0
    v1 = *(int16_t*)((t0) + 6);                                 // 0x0012e0f8: lh $v1, 6($t0)
    /* multiply: v0 * a3 -> hi:lo */                            // 0x0012e0fc: mult $ac2, $v0, $a3
    /* multiply: v1 * a2 -> hi:lo */                            // 0x0012e100: mult $ac3, $v1, $a2
    v0 = v0 >> 0xc;                                             // 0x0012e104: sra $v0, $v0, 0xc
    v0 = t1 - v0;                                               // 0x0012e108: subu $v0, $t1, $v0
    v1 = v1 >> 0xc;                                             // 0x0012e10c: sra $v1, $v1, 0xc
    a2 = v0 - v1;                                               // 0x0012e110: subu $a2, $v0, $v1
    a1 = (a1 < a2) ? 1 : 0;                                     // 0x0012e114: slt $a1, $a1, $a2
    if (a1 != 0) goto label_0x12e138;                           // 0x0012e118: bnez $a1, 0x12e138
    a0 = a0 + 0x18;                                             // 0x0012e11c: addiu $a0, $a0, 0x18
    v0 = -0x8000;                                               // 0x0012e120: addiu $v0, $zero, -0x8000
    v1 = (a2 < -0x8000) ? 1 : 0;                                // 0x0012e124: slti $v1, $a2, -0x8000
    goto label_0x12e13c;                                        // 0x0012e12c: b 0x12e13c
    if (v1 == 0) a1 = a2;                                       // 0x0012e130: movz $a1, $a2, $v1
    /* nop */                                                   // 0x0012e134: nop 
label_0x12e138:
    a1 = 0x7fff;                                                // 0x0012e138: addiu $a1, $zero, 0x7fff
label_0x12e13c:
    v0 = a1 << 0x10;                                            // 0x0012e13c: sll $v0, $a1, 0x10
    v1 = *(int32_t*)((t0) + 0x78);                              // 0x0012e140: lw $v1, 0x78($t0)
    v0 = v0 >> 0x10;                                            // 0x0012e144: sra $v0, $v0, 0x10
    if (v0 < 0) goto label_0x12e150;                            // 0x0012e148: bltzl $v0, 0x12e150
    v0 = -v0;                                                   // 0x0012e14c: negu $v0, $v0
label_0x12e150:
    v1 = (v1 < v0) ? 1 : 0;                                     // 0x0012e150: slt $v1, $v1, $v0
    if (v1 == 0) goto label_0x12e160;                           // 0x0012e154: beqz $v1, 0x12e160
    *(uint16_t*)(a0) = a1;                                      // 0x0012e158: sh $a1, 0($a0)
    *(uint32_t*)((t0) + 0x78) = v0;                             // 0x0012e15c: sw $v0, 0x78($t0)
label_0x12e160:
    v0 = *(uint16_t*)((t0) + 8);                                // 0x0012e160: lhu $v0, 8($t0)
    *(uint16_t*)((t0) + 8) = t1;                                // 0x0012e164: sh $t1, 8($t0)
    *(uint16_t*)((t0) + 0xa) = v0;                              // 0x0012e168: sh $v0, 0xa($t0)
label_0x12e16c:
    return;                                                     // 0x0012e16c: jr $ra
    /* nop */                                                   // 0x0012e170: nop 
}
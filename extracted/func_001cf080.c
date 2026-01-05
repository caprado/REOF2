void func_001cf080() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001cf080: addiu $sp, $sp, -0x10
    a0 = 0x24 << 16;                                            // 0x001cf084: lui $a0, 0x24
    func_0011c0a0();  // 11c0a0                                // 0x001cf08c: jal 0x11c0a0
    a0 = &str_00243a70;  // "thpri=9"                           // 0x001cf090: addiu $a0, $a0, 0x3a70
    at = (v0 < 0) ? 1 : 0;                                      // 0x001cf094: slt $at, $v0, $zero
    if (at != 0) goto label_0x1cf0a8;                           // 0x001cf098: bnez $at, 0x1cf0a8
    func_001ce990();  // 1ce990                                // 0x001cf0a0: jal 0x1ce990
    /* nop */                                                   // 0x001cf0a4: nop 
label_0x1cf0a8:
    a1 = *(int32_t*)((gp) + -0x6260);                           // 0x001cf0a8: lw $a1, -0x6260($gp)
    v0 = 3;                                                     // 0x001cf0ac: addiu $v0, $zero, 3
    v1 = *(int32_t*)(a1);                                       // 0x001cf0b0: lw $v1, 0($a1)
    if (v1 == v0) goto label_0x1cf180;                          // 0x001cf0b4: beq $v1, $v0, 0x1cf180
    a0 = 1;                                                     // 0x001cf0b8: addiu $a0, $zero, 1
    if (v1 == a0) goto label_0x1cf0d4;                          // 0x001cf0bc: beq $v1, $a0, 0x1cf0d4
    v0 = 2;                                                     // 0x001cf0c0: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1cf180;                          // 0x001cf0c4: beq $v1, $v0, 0x1cf180
    /* nop */                                                   // 0x001cf0c8: nop 
    goto label_0x1cf184;                                        // 0x001cf0cc: b 0x1cf184
label_0x1cf0d4:
    v1 = *(int32_t*)((a1) + 4);                                 // 0x001cf0d4: lw $v1, 4($a1)
    v0 = 5;                                                     // 0x001cf0d8: addiu $v0, $zero, 5
    if (v1 == v0) goto label_0x1cf144;                          // 0x001cf0dc: beq $v1, $v0, 0x1cf144
    v0 = 6;                                                     // 0x001cf0e0: addiu $v0, $zero, 6
    if (v1 == v0) goto label_0x1cf120;                          // 0x001cf0e4: beq $v1, $v0, 0x1cf120
    /* nop */                                                   // 0x001cf0e8: nop 
    if (v1 == a0) goto label_0x1cf0fc;                          // 0x001cf0ec: beq $v1, $a0, 0x1cf0fc
    /* nop */                                                   // 0x001cf0f0: nop 
    goto label_0x1cf164;                                        // 0x001cf0f4: b 0x1cf164
    a0 = *(int32_t*)((gp) + -0x6560);                           // 0x001cf0f8: lw $a0, -0x6560($gp)
label_0x1cf0fc:
    a0 = *(int32_t*)((gp) + -0x6554);                           // 0x001cf0fc: lw $a0, -0x6554($gp)
    a2 = 0x24 << 16;                                            // 0x001cf100: lui $a2, 0x24
    a1 = 8;                                                     // 0x001cf104: addiu $a1, $zero, 8
    a2 = &str_00243a90;  // "thpri=10"                          // 0x001cf108: addiu $a2, $a2, 0x3a90
    func_001cea30();  // 1cea30                                // 0x001cf110: jal 0x1cea30
    goto label_0x1cf160;                                        // 0x001cf118: b 0x1cf160
    /* nop */                                                   // 0x001cf11c: nop 
label_0x1cf120:
    a0 = *(int32_t*)((gp) + -0x6550);                           // 0x001cf120: lw $a0, -0x6550($gp)
    a2 = 0x24 << 16;                                            // 0x001cf124: lui $a2, 0x24
    a1 = 8;                                                     // 0x001cf128: addiu $a1, $zero, 8
    a2 = &str_00243a90;  // "thpri=10"                          // 0x001cf12c: addiu $a2, $a2, 0x3a90
    func_001cea30();  // 1cea30                                // 0x001cf134: jal 0x1cea30
    goto label_0x1cf160;                                        // 0x001cf13c: b 0x1cf160
    /* nop */                                                   // 0x001cf140: nop 
label_0x1cf144:
    a0 = *(int32_t*)((gp) + -0x6540);                           // 0x001cf144: lw $a0, -0x6540($gp)
    a2 = 0x24 << 16;                                            // 0x001cf148: lui $a2, 0x24
    a1 = 9;                                                     // 0x001cf14c: addiu $a1, $zero, 9
    a2 = &str_00243a98;  // "%03x NETR:%02d %02d %02d  ERR:%d"  // 0x001cf150: addiu $a2, $a2, 0x3a98
    func_001cea30();  // 1cea30                                // 0x001cf158: jal 0x1cea30
label_0x1cf160:
    a0 = *(int32_t*)((gp) + -0x6560);                           // 0x001cf160: lw $a0, -0x6560($gp)
label_0x1cf164:
    func_001cea30();  // 1cea30                                // 0x001cf170: jal 0x1cea30
    func_001cf5f0();  // 1cf5f0                                // 0x001cf178: jal 0x1cf5f0
    /* nop */                                                   // 0x001cf17c: nop 
label_0x1cf180:
label_0x1cf184:
    v0 = 1;                                                     // 0x001cf184: addiu $v0, $zero, 1
    return;                                                     // 0x001cf188: jr $ra
    sp = sp + 0x10;                                             // 0x001cf18c: addiu $sp, $sp, 0x10
}
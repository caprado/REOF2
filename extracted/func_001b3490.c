void func_001b3490() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x31 << 16;                                            // 0x001b3490: lui $at, 0x31
    v1 = g_00313804;  // Global at 0x00313804                   // 0x001b3494: lhu $v1, 0x3804($at)
    if (v1 == 0) goto label_0x1b34e4;                           // 0x001b3498: beqz $v1, 0x1b34e4
    a1 = (unsigned)a0 >> 0x18;                                  // 0x001b349c: srl $a1, $a0, 0x18
    v1 = a0 & 0xff;                                             // 0x001b34a0: andi $v1, $a0, 0xff
    a1 = a1 & 0x80;                                             // 0x001b34a4: andi $a1, $a1, 0x80
    v1 = (unsigned)v1 >> 1;                                     // 0x001b34a8: srl $v1, $v1, 1
    a1 = a1 << 0x18;                                            // 0x001b34ac: sll $a1, $a1, 0x18
    v1 = v1 << 0x10;                                            // 0x001b34b0: sll $v1, $v1, 0x10
    a2 = a1 | v1;                                               // 0x001b34b4: or $a2, $a1, $v1
    at = 0x2b << 16;                                            // 0x001b34b8: lui $at, 0x2b
    v1 = (unsigned)a0 >> 8;                                     // 0x001b34bc: srl $v1, $a0, 8
    a1 = v1 & 0xff;                                             // 0x001b34c0: andi $a1, $v1, 0xff
    v1 = (unsigned)a0 >> 0x10;                                  // 0x001b34c4: srl $v1, $a0, 0x10
    a0 = (unsigned)a1 >> 1;                                     // 0x001b34c8: srl $a0, $a1, 1
    v1 = v1 & 0xff;                                             // 0x001b34cc: andi $v1, $v1, 0xff
    a0 = a0 << 8;                                               // 0x001b34d0: sll $a0, $a0, 8
    v1 = (unsigned)v1 >> 1;                                     // 0x001b34d4: srl $v1, $v1, 1
    a0 = a0 | a2;                                               // 0x001b34d8: or $a0, $a0, $a2
    v1 = v1 | a0;                                               // 0x001b34dc: or $v1, $v1, $a0
    g_002ac454 = v1;  // Global at 0x002ac454                   // 0x001b34e0: sw $v1, -0x3bac($at)
label_0x1b34e4:
    return;                                                     // 0x001b34e4: jr $ra
    /* nop */                                                   // 0x001b34e8: nop 
}
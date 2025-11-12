void func_00168a00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(uint8_t*)((a1) + 3);                                 // 0x00168a00: lbu $v0, 3($a1)
    a2 = *(uint8_t*)((a1) + 2);                                 // 0x00168a04: lbu $a2, 2($a1)
    a3 = *(uint8_t*)((a1) + 1);                                 // 0x00168a08: lbu $a3, 1($a1)
    t4 = (unsigned)v0 >> 4;                                     // 0x00168a0c: srl $t4, $v0, 4
    t0 = (unsigned)a2 >> 2;                                     // 0x00168a10: srl $t0, $a2, 2
    t1 = (unsigned)a2 >> 1;                                     // 0x00168a14: srl $t1, $a2, 1
    a1 = (unsigned)a3 >> 1;                                     // 0x00168a18: srl $a1, $a3, 1
    a3 = a3 & 1;                                                // 0x00168a1c: andi $a3, $a3, 1
    t2 = (unsigned)v0 >> 3;                                     // 0x00168a20: srl $t2, $v0, 3
    t3 = (unsigned)v0 >> 2;                                     // 0x00168a24: srl $t3, $v0, 2
    t5 = a2 & 1;                                                // 0x00168a28: andi $t5, $a2, 1
    a2 = (unsigned)a2 >> 4;                                     // 0x00168a2c: srl $a2, $a2, 4
    v1 = v0 & 3;                                                // 0x00168a30: andi $v1, $v0, 3
    v0 = (unsigned)v0 >> 6;                                     // 0x00168a34: srl $v0, $v0, 6
    a1 = a1 & 3;                                                // 0x00168a38: andi $a1, $a1, 3
    t0 = t0 & 3;                                                // 0x00168a3c: andi $t0, $t0, 3
    t1 = t1 & 1;                                                // 0x00168a40: andi $t1, $t1, 1
    t4 = t4 & 3;                                                // 0x00168a44: andi $t4, $t4, 3
    t2 = t2 & 1;                                                // 0x00168a48: andi $t2, $t2, 1
    t3 = t3 & 1;                                                // 0x00168a4c: andi $t3, $t3, 1
    *(uint8_t*)((a0) + 0xa) = v1;                               // 0x00168a50: sb $v1, 0xa($a0)
    *(uint8_t*)(a0) = a1;                                       // 0x00168a54: sb $a1, 0($a0)
    *(uint8_t*)((a0) + 1) = a3;                                 // 0x00168a58: sb $a3, 1($a0)
    *(uint8_t*)((a0) + 2) = a2;                                 // 0x00168a5c: sb $a2, 2($a0)
    *(uint8_t*)((a0) + 3) = t0;                                 // 0x00168a60: sb $t0, 3($a0)
    *(uint8_t*)((a0) + 4) = t1;                                 // 0x00168a64: sb $t1, 4($a0)
    *(uint8_t*)((a0) + 5) = t5;                                 // 0x00168a68: sb $t5, 5($a0)
    *(uint8_t*)((a0) + 6) = v0;                                 // 0x00168a6c: sb $v0, 6($a0)
    *(uint8_t*)((a0) + 7) = t4;                                 // 0x00168a70: sb $t4, 7($a0)
    *(uint8_t*)((a0) + 8) = t2;                                 // 0x00168a74: sb $t2, 8($a0)
    return;                                                     // 0x00168a78: jr $ra
    *(uint8_t*)((a0) + 9) = t3;                                 // 0x00168a7c: sb $t3, 9($a0)
}
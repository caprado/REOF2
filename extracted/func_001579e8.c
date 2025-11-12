void func_001579e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001579e8: addiu $sp, $sp, -0x10
    goto label_0x157a00;                                        // 0x001579f4: j 0x157a00
    sp = sp + 0x10;                                             // 0x001579f8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001579fc: nop 
label_0x157a00:
    a2 = *(uint8_t*)(a0);                                       // 0x00157a00: lbu $a2, 0($a0)
    v0 = *(uint8_t*)((a0) + 1);                                 // 0x00157a04: lbu $v0, 1($a0)
    a2 = a2 << 8;                                               // 0x00157a08: sll $a2, $a2, 8
    v1 = *(uint8_t*)((a0) + 2);                                 // 0x00157a0c: lbu $v1, 2($a0)
    a2 = a2 | v0;                                               // 0x00157a10: or $a2, $a2, $v0
    a1 = *(uint8_t*)((a0) + 3);                                 // 0x00157a14: lbu $a1, 3($a0)
    a2 = a2 << 8;                                               // 0x00157a18: sll $a2, $a2, 8
    a2 = a2 | v1;                                               // 0x00157a1c: or $a2, $a2, $v1
    a2 = a2 << 8;                                               // 0x00157a20: sll $a2, $a2, 8
    a2 = a2 | a1;                                               // 0x00157a24: or $a2, $a2, $a1
    v1 = a2 + -0x1b9;                                           // 0x00157a28: addiu $v1, $a2, -0x1b9
    v0 = ((unsigned)v1 < (unsigned)7) ? 1 : 0;                  // 0x00157a2c: sltiu $v0, $v1, 7
    if (v0 == 0) return;  // Branch to 0x157a74                 // 0x00157a30: beqz $v0, 0x157a74
    v0 = a2 + -0x1c0;                                           // 0x00157a34: addiu $v0, $a2, -0x1c0
    v0 = v1 << 2;                                               // 0x00157a38: sll $v0, $v1, 2
    v1 = 0x22 << 16;                                            // 0x00157a3c: lui $v1, 0x22
    v1 = v1 + v0;                                               // 0x00157a40: addu $v1, $v1, $v0
    v1 = g_00226dd0;  // Global at 0x00226dd0                   // 0x00157a44: lw $v1, 0x6dd0($v1)
    /* jump to address in v1 */                                 // 0x00157a48: jr $v1
    /* nop */                                                   // 0x00157a4c: nop 
    return;                                                     // 0x00157a50: jr $ra
    v0 = 1 << 16;                                               // 0x00157a54: lui $v0, 1
}
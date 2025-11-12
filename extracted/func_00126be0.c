void func_00126be0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = (a1 < 0x10) ? 1 : 0;                                   // 0x00126be0: slti $a1, $a1, 0x10
    if (a1 != 0) goto label_0x126c34;                           // 0x00126be8: bnez $a1, 0x126c34
    v0 = -1;                                                    // 0x00126bec: addiu $v0, $zero, -1
    v1 = *(uint16_t*)(a3);                                      // 0x00126bf0: lhu $v1, 0($a3)
    a1 = 0 | 0x8001;                                            // 0x00126bf4: ori $a1, $zero, 0x8001
    a0 = v1 << 8;                                               // 0x00126bf8: sll $a0, $v1, 8
    v1 = (unsigned)v1 >> 8;                                     // 0x00126bfc: srl $v1, $v1, 8
    v1 = v1 | a0;                                               // 0x00126c00: or $v1, $v1, $a0
    v1 = v1 & 0xffff;                                           // 0x00126c04: andi $v1, $v1, 0xffff
    if (v1 != a1) goto label_0x126c34;                          // 0x00126c08: bne $v1, $a1, 0x126c34
    v0 = -2;                                                    // 0x00126c0c: addiu $v0, $zero, -2
    v1 = *(uint16_t*)((a3) + 2);                                // 0x00126c10: lhu $v1, 2($a3)
    a1 = -0x100;                                                // 0x00126c14: addiu $a1, $zero, -0x100
    a0 = *(uint8_t*)((a3) + 3);                                 // 0x00126c18: lbu $a0, 3($a3)
    v1 = v1 << 8;                                               // 0x00126c20: sll $v1, $v1, 8
    v1 = v1 & a1;                                               // 0x00126c24: and $v1, $v1, $a1
    a0 = a0 | v1;                                               // 0x00126c28: or $a0, $a0, $v1
    a0 = a0 + 4;                                                // 0x00126c2c: addiu $a0, $a0, 4
    *(uint16_t*)(a2) = a0;                                      // 0x00126c30: sh $a0, 0($a2)
label_0x126c34:
    return;                                                     // 0x00126c34: jr $ra
    /* nop */                                                   // 0x00126c38: nop 
}
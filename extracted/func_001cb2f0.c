void func_001cb2f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a1 & 0xff;                                             // 0x001cb2f0: andi $v0, $a1, 0xff
    v0 = v0 & 0x80;                                             // 0x001cb2f4: andi $v0, $v0, 0x80
    if (v0 == 0) goto label_0x1cb304;                           // 0x001cb2f8: beqz $v0, 0x1cb304
    v0 = a0 + 8;                                                // 0x001cb2fc: addiu $v0, $a0, 8
    v0 = a0 + 0x18;                                             // 0x001cb300: addiu $v0, $a0, 0x18
label_0x1cb304:
    v1 = *(uint8_t*)((v0) + 8);                                 // 0x001cb304: lbu $v1, 8($v0)
    v0 = *(uint8_t*)((v0) + 9);                                 // 0x001cb308: lbu $v0, 9($v0)
    at = (v1 < v0) ? 1 : 0;                                     // 0x001cb30c: slt $at, $v1, $v0
    if (at == 0) goto label_0x1cb320;                           // 0x001cb310: beqz $at, 0x1cb320
    /* nop */                                                   // 0x001cb314: nop 
    goto label_0x1cb324;                                        // 0x001cb318: b 0x1cb324
    v0 = 1;                                                     // 0x001cb31c: addiu $v0, $zero, 1
label_0x1cb320:
label_0x1cb324:
    return;                                                     // 0x001cb324: jr $ra
    /* nop */                                                   // 0x001cb328: nop 
}
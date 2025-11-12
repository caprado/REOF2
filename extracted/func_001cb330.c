void func_001cb330() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)((a0) + 0xc);                               // 0x001cb330: lw $v0, 0xc($a0)
    a1 = *(uint8_t*)((a0) + 9);                                 // 0x001cb334: lbu $a1, 9($a0)
    goto label_0x1cb368;                                        // 0x001cb338: b 0x1cb368
label_0x1cb340:
    v1 = *(uint8_t*)((v0) + 0xf);                               // 0x001cb340: lbu $v1, 0xf($v0)
    v1 = v1 & 0x20;                                             // 0x001cb344: andi $v1, $v1, 0x20
    if (v1 != 0) goto label_0x1cb358;                           // 0x001cb348: bnez $v1, 0x1cb358
    /* nop */                                                   // 0x001cb34c: nop 
    goto label_0x1cb378;                                        // 0x001cb350: b 0x1cb378
    /* nop */                                                   // 0x001cb354: nop 
label_0x1cb358:
    v1 = *(uint8_t*)((a0) + 0xa);                               // 0x001cb358: lbu $v1, 0xa($a0)
    a2 = a2 + 1;                                                // 0x001cb35c: addiu $a2, $a2, 1
    v0 = v0 + v1;                                               // 0x001cb360: addu $v0, $v0, $v1
    v0 = v0 + 8;                                                // 0x001cb364: addiu $v0, $v0, 8
label_0x1cb368:
    v1 = (a2 < a1) ? 1 : 0;                                     // 0x001cb368: slt $v1, $a2, $a1
    if (v1 != 0) goto label_0x1cb340;                           // 0x001cb36c: bnez $v1, 0x1cb340
    /* nop */                                                   // 0x001cb370: nop 
label_0x1cb378:
    return;                                                     // 0x001cb378: jr $ra
    /* nop */                                                   // 0x001cb37c: nop 
}
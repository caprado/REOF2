/** @category: compression/lz77 @status: complete @author: caprado */
void func_001aee20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
label_0x1aee28:
    if (t0 != 0) goto label_0x1aee40;                           // 0x001aee28: bnez $t0, 0x1aee40
    v1 = t1 & t0;                                               // 0x001aee2c: and $v1, $t1, $t0
    t1 = *(int16_t*)(a0);                                       // 0x001aee30: lh $t1, 0($a0)
    t0 = 0 | 0x8000;                                            // 0x001aee34: ori $t0, $zero, 0x8000
    a0 = a0 + 2;                                                // 0x001aee38: addiu $a0, $a0, 2
    v1 = t1 & t0;                                               // 0x001aee3c: and $v1, $t1, $t0
label_0x1aee40:
    if (v1 == 0) goto label_0x1aeec8;                           // 0x001aee40: beqz $v1, 0x1aeec8
    /* nop */                                                   // 0x001aee44: nop 
    v1 = *(uint16_t*)(a0);                                      // 0x001aee48: lhu $v1, 0($a0)
    a3 = (unsigned)v1 >> 0xb;                                   // 0x001aee4c: srl $a3, $v1, 0xb
    if (a3 == 0) goto label_0x1aee60;                           // 0x001aee50: beqz $a3, 0x1aee60
    a0 = a0 + 2;                                                // 0x001aee54: addiu $a0, $a0, 2
    goto label_0x1aee68;                                        // 0x001aee58: b 0x1aee68
    v1 = v1 & 0x7ff;                                            // 0x001aee5c: andi $v1, $v1, 0x7ff
label_0x1aee60:
    a3 = *(uint16_t*)(a0);                                      // 0x001aee60: lhu $a3, 0($a0)
    a0 = a0 + 2;                                                // 0x001aee64: addiu $a0, $a0, 2
label_0x1aee68:
    if (v1 != 0) goto label_0x1aee9c;                           // 0x001aee68: bnez $v1, 0x1aee9c
    /* nop */                                                   // 0x001aee6c: nop 
    if (a3 == 0) goto label_0x1aeee4;                           // 0x001aee70: beqz $a3, 0x1aeee4
    /* nop */                                                   // 0x001aee74: nop 
label_0x1aee78:
    *(uint16_t*)(a1) = 0;                                       // 0x001aee78: sh $zero, 0($a1)
    a3 = a3 + -1;                                               // 0x001aee7c: addiu $a3, $a3, -1
    a1 = a1 + 2;                                                // 0x001aee80: addiu $a1, $a1, 2
    /* nop */                                                   // 0x001aee84: nop 
    /* nop */                                                   // 0x001aee88: nop 
    if (a3 != 0) goto label_0x1aee78;                           // 0x001aee8c: bnez $a3, 0x1aee78
    /* nop */                                                   // 0x001aee90: nop 
    goto label_0x1aeedc;                                        // 0x001aee94: b 0x1aeedc
    t0 = t0 >> 1;                                               // 0x001aee98: sra $t0, $t0, 1
label_0x1aee9c:
    v1 = v1 << 1;                                               // 0x001aee9c: sll $v1, $v1, 1
    a2 = a1 - v1;                                               // 0x001aeea0: subu $a2, $a1, $v1
label_0x1aeea4:
    v1 = *(uint16_t*)(a2);                                      // 0x001aeea4: lhu $v1, 0($a2)
    a3 = a3 + -1;                                               // 0x001aeea8: addiu $a3, $a3, -1
    *(uint16_t*)(a1) = v1;                                      // 0x001aeeac: sh $v1, 0($a1)
    a2 = a2 + 2;                                                // 0x001aeeb0: addiu $a2, $a2, 2
    a1 = a1 + 2;                                                // 0x001aeeb4: addiu $a1, $a1, 2
    if (a3 != 0) goto label_0x1aeea4;                           // 0x001aeeb8: bnez $a3, 0x1aeea4
    /* nop */                                                   // 0x001aeebc: nop 
    goto label_0x1aeed8;                                        // 0x001aeec0: b 0x1aeed8
    /* nop */                                                   // 0x001aeec4: nop 
label_0x1aeec8:
    v1 = *(uint16_t*)(a0);                                      // 0x001aeec8: lhu $v1, 0($a0)
    *(uint16_t*)(a1) = v1;                                      // 0x001aeecc: sh $v1, 0($a1)
    a0 = a0 + 2;                                                // 0x001aeed0: addiu $a0, $a0, 2
    a1 = a1 + 2;                                                // 0x001aeed4: addiu $a1, $a1, 2
label_0x1aeed8:
    t0 = t0 >> 1;                                               // 0x001aeed8: sra $t0, $t0, 1
label_0x1aeedc:
    goto label_0x1aee28;                                        // 0x001aeedc: b 0x1aee28
    /* nop */                                                   // 0x001aeee0: nop 
label_0x1aeee4:
    return;                                                     // 0x001aeee4: jr $ra
    /* nop */                                                   // 0x001aeee8: nop 
}
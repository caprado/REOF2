void func_00126330() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t0 = 0x7fff << 16;                                          // 0x00126330: lui $t0, 0x7fff
    a1 = a1 + -1;                                               // 0x00126334: addiu $a1, $a1, -1
    t0 = t0 | 0xffff;                                           // 0x00126338: ori $t0, $t0, 0xffff
    t1 = 0x80;                                                  // 0x0012633c: addiu $t1, $zero, 0x80
    if (a1 <= 0) goto label_0x12638c;                           // 0x00126340: blez $a1, 0x12638c
    v0 = *(int16_t*)(a0);                                       // 0x00126348: lh $v0, 0($a0)
    if (v0 != t1) goto label_0x126360;                          // 0x0012634c: bnel $v0, $t1, 0x126360
    a3 = a3 + 2;                                                // 0x00126350: addiu $a3, $a3, 2
    goto label_0x12638c;                                        // 0x00126354: b 0x12638c
    /* nop */                                                   // 0x0012635c: nop 
label_0x126360:
    v0 = (a3 < a1) ? 1 : 0;                                     // 0x00126360: slt $v0, $a3, $a1
    if (v0 == 0) goto label_0x12638c;                           // 0x00126364: beqz $v0, 0x12638c
    v1 = a0 + a3;                                               // 0x00126368: addu $v1, $a0, $a3
    v0 = *(int16_t*)(v1);                                       // 0x0012636c: lh $v0, 0($v1)
    /* nop */                                                   // 0x00126370: nop 
    /* nop */                                                   // 0x00126374: nop 
    /* nop */                                                   // 0x00126378: nop 
    if (v0 != t1) goto label_0x126360;                          // 0x0012637c: bnel $v0, $t1, 0x126360
    a3 = a3 + 2;                                                // 0x00126380: addiu $a3, $a3, 2
    v0 = (a3 < t0) ? 1 : 0;                                     // 0x00126384: slt $v0, $a3, $t0
    if (v0 != 0) t0 = a3;                                       // 0x00126388: movn $t0, $a3, $v0
label_0x12638c:
    v0 = 0x7fff << 16;                                          // 0x0012638c: lui $v0, 0x7fff
    v0 = v0 | 0xffff;                                           // 0x00126390: ori $v0, $v0, 0xffff
    if (t0 == v0) return;  // Branch to 0x1263a8                // 0x00126394: beql $t0, $v0, 0x1263a8
    *(uint16_t*)(a2) = 0;                                       // 0x00126398: sh $zero, 0($a2)
    *(uint16_t*)(a2) = t0;                                      // 0x0012639c: sh $t0, 0($a2)
    return;                                                     // 0x001263a0: jr $ra
}
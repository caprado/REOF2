void func_001a1250() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = *(int32_t*)((a0) + 0xc);                               // 0x001a1250: lw $v0, 0xc($a0)
    if (v0 == 0) goto label_0x1a127c;                           // 0x001a1254: beqz $v0, 0x1a127c
    /* nop */                                                   // 0x001a1258: nop 
    a2 = *(int32_t*)((a0) + 0x14);                              // 0x001a125c: lw $a2, 0x14($a0)
    a1 = *(int32_t*)((a0) + 4);                                 // 0x001a1260: lw $a1, 4($a0)
    v1 = *(int32_t*)((a0) + 0x10);                              // 0x001a1264: lw $v1, 0x10($a0)
    v0 = *(int32_t*)((a0) + 0x20);                              // 0x001a1268: lw $v0, 0x20($a0)
    a0 = a2 + a1;                                               // 0x001a126c: addu $a0, $a2, $a1
    v1 = a0 - v1;                                               // 0x001a1270: subu $v1, $a0, $v1
    goto label_0x1a1298;                                        // 0x001a1274: b 0x1a1298
    v0 = v1 - v0;                                               // 0x001a1278: subu $v0, $v1, $v0
label_0x1a127c:
    a2 = *(int32_t*)((a0) + 0x14);                              // 0x001a127c: lw $a2, 0x14($a0)
    a1 = *(int32_t*)((a0) + 4);                                 // 0x001a1280: lw $a1, 4($a0)
    v1 = *(int32_t*)((a0) + 0x10);                              // 0x001a1284: lw $v1, 0x10($a0)
    v0 = *(int32_t*)((a0) + 0x20);                              // 0x001a1288: lw $v0, 0x20($a0)
    a0 = a2 - a1;                                               // 0x001a128c: subu $a0, $a2, $a1
    v1 = v1 - a0;                                               // 0x001a1290: subu $v1, $v1, $a0
    v0 = v1 - v0;                                               // 0x001a1294: subu $v0, $v1, $v0
label_0x1a1298:
    return;                                                     // 0x001a1298: jr $ra
    /* nop */                                                   // 0x001a129c: nop 
}